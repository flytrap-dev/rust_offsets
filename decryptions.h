#pragma once
#include "mem/memify.h"
#include <cstdint>

namespace decryption
{
    inline uintptr_t il2cpp_get_handle( memify& mem, uintptr_t handle_ptr )
    {
        if ( !handle_ptr ) return 0;
        uintptr_t page = handle_ptr & 0xFFFFFFFFFFFFE000ULL;
        uint8_t   type = mem.Read<uint8_t>( page + 0x20 );
        if ( type >= 4 ) return 0;
        int64_t  slot  = static_cast<int64_t>( handle_ptr - page - 0x28 ) >> 3;
        uint32_t size  = mem.Read<uint32_t>( page + 0x1C );
        if ( static_cast<uint32_t>( slot ) >= size ) return 0;
        uintptr_t bitmap = mem.Read<uintptr_t>( page + 0x10 );
        uint32_t  mask   = mem.Read<uint32_t>( bitmap + 4 * ( static_cast<uint32_t>( slot ) >> 5 ) );
        if ( !( ( mask >> ( slot & 0x1F ) ) & 1 ) ) return 0;
        uintptr_t entry = mem.Read<uintptr_t>( page + 8 * ( static_cast<uint32_t>( slot ) + 5 ) );
        return ( type > 1 ) ? entry : ~entry;
    }

    namespace _54466d6d043cd15db1b0a2f9d4db1c6307dedcc1
    {
        inline uintptr_t _54466d6d043cd15db1b0a2f9d4db1c6307dedcc1__89f5e67e4dcddcaf6b8fc87fd42e72a92737e1d0( memify& mem, uintptr_t a1 )
        {
            uint64_t rax = mem.Read<uint64_t>( a1 + 0x18 );

            uint64_t rdx = 0;
            rdx = rax + 0x1;
            rax = (rax & 0xFFFFFFFF00000000ULL) | (uint64_t)rdx;

            return static_cast<uintptr_t>( rax );
        }

        constexpr auto& _54466d6d043cd15db1b0a2f9d4db1c6307dedcc1__772773f547efad6064f6a694d403a8b6649a23d3 = _54466d6d043cd15db1b0a2f9d4db1c6307dedcc1__89f5e67e4dcddcaf6b8fc87fd42e72a92737e1d0;

        constexpr auto& _54466d6d043cd15db1b0a2f9d4db1c6307dedcc1_c67c23116cfc5fbb5798b600d7b784b09ed4b9c3 = _54466d6d043cd15db1b0a2f9d4db1c6307dedcc1__89f5e67e4dcddcaf6b8fc87fd42e72a92737e1d0;

        constexpr auto& _54466d6d043cd15db1b0a2f9d4db1c6307dedcc1_c796bc9ac37d31af61433668a03ce648a4a5a7ec = _54466d6d043cd15db1b0a2f9d4db1c6307dedcc1__89f5e67e4dcddcaf6b8fc87fd42e72a92737e1d0;

        constexpr auto& _54466d6d043cd15db1b0a2f9d4db1c6307dedcc1_c091c9d446dcddb4f6df781b36fb3a828285d311 = _54466d6d043cd15db1b0a2f9d4db1c6307dedcc1__89f5e67e4dcddcaf6b8fc87fd42e72a92737e1d0;

        constexpr auto& _54466d6d043cd15db1b0a2f9d4db1c6307dedcc1__21a1feb7ee219f60973573545139da5fc3d75ffb = _54466d6d043cd15db1b0a2f9d4db1c6307dedcc1__89f5e67e4dcddcaf6b8fc87fd42e72a92737e1d0;

        constexpr auto& _54466d6d043cd15db1b0a2f9d4db1c6307dedcc1_c9fff85057ef35dea1b0b82f74cf5742c82fa795 = _54466d6d043cd15db1b0a2f9d4db1c6307dedcc1__89f5e67e4dcddcaf6b8fc87fd42e72a92737e1d0;

    }

    namespace burst_string_t_float_union64
    {
        inline uintptr_t burst_string_t_float_union64_get_exponent( memify& mem, uintptr_t a1 )
        {
            uint64_t rax = mem.Read<uint64_t>( a1 + 0x0 );

            uint32_t eax = 0;
            rax >>= 20;
            eax = (uint32_t)rax;
            eax &= 0x7FF;
            rax = (uint64_t)eax;

            return static_cast<uintptr_t>( rax );
        }

        inline uintptr_t burst_string_t_float_union64_get_mantissa( memify& mem, uintptr_t a1 )
        {
            uint64_t rax = mem.Read<uint64_t>( a1 + 0x0 );

            uint64_t rcx = 0;
            rcx = 0xFFFFFFFFFFFFF;
            rax &= rcx;

            return static_cast<uintptr_t>( rax );
        }

    }

    namespace date_time
    {
        inline uintptr_t date_time_get_internal_ticks( memify& mem, uintptr_t a1 )
        {
            uint64_t rax = mem.Read<uint64_t>( a1 + 0x0 );

            uint64_t rcx = 0;
            rcx = 0x3FFFFFFFFFFFFFFF;
            rax &= rcx;

            return static_cast<uintptr_t>( rax );
        }

        inline uintptr_t date_time_get_internal_kind( memify& mem, uintptr_t a1 )
        {
            uint64_t rax = mem.Read<uint64_t>( a1 + 0x0 );

            uint64_t rcx = 0;
            rcx = 0xC000000000000000;
            rax &= rcx;

            return static_cast<uintptr_t>( rax );
        }

    }

}
