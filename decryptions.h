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
