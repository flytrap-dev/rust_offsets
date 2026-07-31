#pragma once
#include <cstdint>

namespace offsets
{
    inline constexpr uintptr_t il2cpp_handle = 0x0;

    inline constexpr uintptr_t received_data_from_server        = 0x27D3800;

    namespace base_entity
    {
        inline constexpr uintptr_t model                            = 0x1A8;
        inline constexpr uintptr_t flags                            = 0x1B0;
    }

    namespace skinned_multi_mesh
    {
        inline constexpr uintptr_t RendererList                     = 0x50;
    }

    namespace base_combat_entity
    {
        inline constexpr uintptr_t lifestate                        = 0x298;
        inline constexpr uintptr_t health                           = 0x2A4;
        inline constexpr uintptr_t max_health                       = 0x2A8;
        inline constexpr uintptr_t model                            = 0x1A8;
    }

    namespace base_networkable
    {
        inline constexpr uintptr_t type_info      = 0x0;  // TODO: resolve at runtime via type_definition_index
        inline constexpr uintptr_t static_fields  = 0xB8;
        inline constexpr uintptr_t parent_statics = 0x10;
        inline constexpr uintptr_t wrapper_class  = 0x8;
        inline constexpr uintptr_t entities                         = 0x18;
    }

    namespace world_item
    {
        inline constexpr uintptr_t allowPickup                      = 0x1F0;
        inline constexpr uintptr_t item                             = 0x1F8;
    }

    namespace player_eyes
    {
        inline constexpr uintptr_t viewOffset                       = 0x40;
        inline constexpr uintptr_t bodyRotation                     = 0x50;
        inline constexpr uintptr_t unk_quaternion                   = 0x6C;
    }

    namespace model
    {
        inline constexpr uintptr_t rootBone                         = 0x28;
        inline constexpr uintptr_t headBone                         = 0x30;
        inline constexpr uintptr_t boneTransforms                   = 0x50;
    }

    namespace player_inventory
    {
        inline constexpr uintptr_t container1                       = 0x30;
        inline constexpr uintptr_t container2                       = 0x38;
        inline constexpr uintptr_t container3                       = 0x58;
        inline constexpr uintptr_t main_container                   = container1;
        inline constexpr uintptr_t belt                             = container2;
        inline constexpr uintptr_t wear                             = container3;
    }

    namespace base_player
    {
        inline constexpr uintptr_t PlayerInventory                  = 0x2E0;
        inline constexpr uintptr_t player_model                     = 0x3F0;
        inline constexpr uintptr_t modelState                       = 0x478;
        inline constexpr uintptr_t display_name                     = 0x4A8;
        inline constexpr uintptr_t PlayerEyes                       = 0x4F8;
        inline constexpr uintptr_t currentTeam                      = 0x538;
        inline constexpr uintptr_t clActiveItem                     = 0x568;
        inline constexpr uintptr_t playerFlags                      = 0x6B8;
        inline constexpr uintptr_t player_input                     = 0x728;
        inline constexpr uintptr_t active_item                      = 0x568;
        inline constexpr uintptr_t base_movement                    = 0x308;
        inline constexpr uintptr_t steam_id                         = 0x408;
    }

    namespace player_input
    {
        inline constexpr uintptr_t bodyAngles                       = 0x44;
    }

    namespace recoil_properties
    {
        inline constexpr uintptr_t clampPitch                       = 0x38;
        inline constexpr uintptr_t pitchCurve                       = 0x40;
        inline constexpr uintptr_t yawCurve                         = 0x48;
        inline constexpr uintptr_t useCurves                        = 0x50;
        inline constexpr uintptr_t newRecoilOverride                = 0x80;
        inline constexpr uintptr_t yaw_min                          = 0x18;
        inline constexpr uintptr_t yaw_max                          = 0x1C;
        inline constexpr uintptr_t pitch_min                        = 0x20;
        inline constexpr uintptr_t pitch_max                        = 0x24;
        inline constexpr uintptr_t time_min                         = 0x28;
        inline constexpr uintptr_t time_max                         = 0x2C;
        inline constexpr uintptr_t ads_scale                        = 0x30;
        inline constexpr uintptr_t move_penalty                     = 0x34;
    }

    namespace camera_update_hook
    {
        inline constexpr uintptr_t action                           = 0x8;
    }

    namespace base_projectile
    {
        inline constexpr uintptr_t damageScale                      = 0x374;
        inline constexpr uintptr_t automatic                        = 0x380;
        inline constexpr uintptr_t MuzzlePoint                      = 0x3B8;
        inline constexpr uintptr_t reloadTime                       = 0x3C0;
        inline constexpr uintptr_t primaryMagazine                  = 0x3C8;
        inline constexpr uintptr_t aimSway                          = 0x3E8;
        inline constexpr uintptr_t aimSwaySpeed                     = 0x3EC;
        inline constexpr uintptr_t recoil                           = 0x3F0;
        inline constexpr uintptr_t aimCone                          = 0x400;
        inline constexpr uintptr_t hipAimCone                       = 0x404;
        inline constexpr uintptr_t numShotsFired                    = 0x43C;
        inline constexpr uintptr_t projectile_vel_scale             = damage_scale;
    }

    namespace player_model
    {
        inline constexpr uintptr_t velocity                         = 0x28;
        inline constexpr uintptr_t position                         = 0x2F8;
        inline constexpr uintptr_t skinned_mesh_renderer            = 0x448;
        inline constexpr uintptr_t SkinnedMultiMesh                 = 0x448;
    }

    namespace base_view_model
    {
        inline constexpr uintptr_t viewmodelType                    = 0x50;
        inline constexpr uintptr_t MuzzlePoint                      = 0x58;
        inline constexpr uintptr_t list                             = 0x90;
        inline constexpr uintptr_t animation_events                 = 0xE0;
        inline constexpr uintptr_t viewmodel_lower                  = viewmodel_type;
        inline constexpr uintptr_t viewmodel_bob                    = muzzle_point;
        inline constexpr uintptr_t viewmodel_sway                   = animation_events;
    }

    namespace item_definition
    {
        inline constexpr uintptr_t displayName                      = 0x40;
        inline constexpr uintptr_t category                         = 0x58;
        inline constexpr uintptr_t ItemModWearable                  = 0x1A8;
        inline constexpr uintptr_t short_name                       = 0x28;
        inline constexpr uintptr_t item_display_english             = 0x20;
        inline constexpr uintptr_t item_id                          = 0x40;
    }

    namespace tod_sky
    {
        inline constexpr uintptr_t type_info      = 0x0;  // TODO: resolve at runtime via type_definition_index
        inline constexpr uintptr_t static_fields  = 0xB8;
        inline constexpr uintptr_t Cycle                            = 0x40;
        inline constexpr uintptr_t World                            = 0x48;
        inline constexpr uintptr_t Atmosphere                       = 0x50;
        inline constexpr uintptr_t Day                              = 0x58;
        inline constexpr uintptr_t Night                            = 0x60;
        inline constexpr uintptr_t Sun                              = 0x68;
        inline constexpr uintptr_t Moon                             = 0x70;
        inline constexpr uintptr_t Stars                            = 0x78;
        inline constexpr uintptr_t Clouds                           = 0x80;
        inline constexpr uintptr_t Light                            = 0x88;
        inline constexpr uintptr_t Fog                              = 0x90;
        inline constexpr uintptr_t Ambient                          = 0x98;
        inline constexpr uintptr_t Reflection                       = 0xA0;
        inline constexpr uintptr_t instance                         = 0x0;
    }

    namespace action
    {
        inline constexpr uintptr_t invoke_impl                      = 0x0;
        inline constexpr uintptr_t method                           = 0x0;
        inline constexpr uintptr_t method_code                      = 0x0;
    }

    namespace camera
    {
        inline constexpr uintptr_t type_info      = 0x0;  // TODO: resolve at runtime via type_definition_index
        inline constexpr uintptr_t static_fields  = 0xB8;
        inline constexpr uintptr_t camera_object                    = 0x8;
        inline constexpr uintptr_t entity                           = 0x10;
        inline constexpr uintptr_t view_matrix_native               = 0x2FC;
    }

    namespace skinned_mesh_renderer
    {
        inline constexpr uintptr_t list                             = 0x58;
    }

    namespace transform
    {
        inline constexpr uintptr_t visual_state                     = 0x38;
        inline constexpr uintptr_t data_array                       = 0x18;
        inline constexpr uintptr_t index                            = 0x40;
    }

    namespace list_component_playermodel
    {
        inline constexpr uintptr_t type_info                        = 0xFCE8520;
        inline constexpr uintptr_t static_fields                    = 0xB8;
        inline constexpr uintptr_t instance                         = 0x8;
        inline constexpr uintptr_t parent                           = 0x10;
        inline constexpr uintptr_t buffer                           = 0x10;
        inline constexpr uintptr_t size                             = 0x18;
    }

    namespace base_view_model_cctor
    {
        inline constexpr uintptr_t type_info                        = 0xFD06708;
    }

    namespace model_state
    {
        inline constexpr uintptr_t flags                            = 0x40;
    }

    namespace item_container
    {
        inline constexpr uintptr_t list                             = 0x28;
        inline constexpr uintptr_t item_list                        = 0x28;
    }

    namespace item
    {
        inline constexpr uintptr_t item_definition                  = 0x70;
        inline constexpr uintptr_t item_uid                         = 0x40;
        inline constexpr uintptr_t item_uid2                        = 0xA0;
        inline constexpr uintptr_t item_uid3                        = 0xD8;
        inline constexpr uintptr_t item_uid4                        = 0xF0;
        inline constexpr uintptr_t held_entity                      = 0x58;
        inline constexpr uintptr_t held_entity2                     = 0x80;
    }

    namespace magazine
    {
        inline constexpr uintptr_t definition                       = 0x10;
        inline constexpr uintptr_t capacity                         = 0x18;
        inline constexpr uintptr_t contents                         = 0x1C;
        inline constexpr uintptr_t ammo_type                        = 0x20;
    }

    namespace flint_strike
    {
        inline constexpr uintptr_t success_frac                     = 0x488;
        inline constexpr uintptr_t strike_recoil                    = 0x490;
        inline constexpr uintptr_t spark_frame                      = 0x498;
    }

    namespace native
    {
        inline constexpr uintptr_t cached_ptr                       = 0x10;
        inline constexpr uintptr_t game_object                      = 0x30;
        inline constexpr uintptr_t obj_transform                    = 0x8;
    }

    namespace il2cpp_string
    {
        inline constexpr uintptr_t length                           = 0x10;
        inline constexpr uintptr_t chars                            = 0x14;
    }

    namespace il2cpp_list
    {
        inline constexpr uintptr_t items                            = 0x10;
        inline constexpr uintptr_t count                            = 0x18;
    }

    namespace il2cpp_array
    {
        inline constexpr uintptr_t max_length                       = 0x18;
        inline constexpr uintptr_t first_element                    = 0x20;
    }

    namespace il2cpp_class
    {
        inline constexpr uintptr_t name                             = 0x10;
    }

    namespace main_camera = camera;

}
