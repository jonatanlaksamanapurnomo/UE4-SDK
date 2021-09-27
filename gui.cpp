#include "gui.h"
#include "vars.hpp"
#include "Offsts.h"

#if CUSTOM_ICONS
#include "icons.h"
#endif

namespace Features
{
	void InitSDK() {
		uintptr_t base_address = (reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)));
		SDK::m_world = reinterpret_cast<CG::UWorld**>(base_address + 0x55A4E90); /*Tiger-Win64-Shipping.exe+55A4E90*/
		CG::UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(base_address + 0x546B368);
		CG::FName::GNames = reinterpret_cast<CG::GNAME_TYPE*>(base_address + 0x5452BC0);
		SDK::offset_bones = base_address + 0x2B2B430;
	}

	/* NOW WE CAN PASTE OUR FAVORITE CODENZ */

	void ESP() {
		if ((*SDK::m_world) == nullptr) return;
		SDK::m_persistence_level = (*SDK::m_world)->PersistentLevel;
		SDK::local_player = (*SDK::m_world)->OwningGameInstance->LocalPlayers[0]; if ((SDK::local_player) == nullptr) return;
		auto* player_controller = SDK::local_player->PlayerController; if ((player_controller) == nullptr) return;
		auto acknowledged_pawn = player_controller->AcknowledgedPawn; if ((acknowledged_pawn) == nullptr) return;
		auto* root_component = acknowledged_pawn->RootComponent; if ((root_component) == nullptr) return;
		auto game_state = (*SDK::m_world)->GameState; if ((game_state) == nullptr) return;
		auto player_array = game_state->PlayerArray;
		CG::FVector2D screen;
		for (int i = 0; i < player_array.Num(); i++) {
			auto pawn = player_array[i]->PawnPrivate; if ((pawn) == nullptr) continue;
			//	if (is_local_player(pawn)) continue;
			auto actor_root_component = pawn->RootComponent; if ((actor_root_component) == nullptr) continue;
			CG::ATigerCharacter* character = static_cast<CG::ATigerCharacter*>(pawn);
			auto metabolism_prarm = character->IsDead(); if (metabolism_prarm == 1) continue;
			CG::FVector root_bone;
			//GetBoneLocation(character->Mesh, &root_bone, 28);
			auto const Player = (CG::ATigerPlayer*) pawn; if ((Player) == nullptr) continue;
			const wchar_t* actor_name = Player->GetTigerPlayerState()->GetPlayerName().cw_str();
			char name[32];
			std::wcstombs(name, actor_name, 32);

			if (player_controller->ProjectWorldLocationToScreen(actor_root_component->RelativeLocation, &screen, false))
			{
				ImVec2 sz = ImGui::CalcTextSize(name, NULL, true);
				ImGui::GetOverlayDrawList()->AddText(ImVec2(screen.X - sz.x / 2 - 1, screen.Y + 15), ImColor{255, 255, 255}, name);
			}
		}
	}
}
namespace Gui
{
	void Render()
	{
		ImGui::Begin(GUI_NAME, nullptr);
		ImGui::End();
	}
}