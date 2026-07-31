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

    inline uintptr_t base_networkable( memify& mem, uintptr_t a1 )
    {
        uintptr_t rax = mem.Read<uintptr_t>( a1 + 0x18 );
        uint32_t* p   = reinterpret_cast<uint32_t*>( &rax );
        for ( uint32_t i = 0; i < 2; ++i )
        {
            uint32_t eax = p[ i ];
            eax += 0xB97F1AE1;
            uint32_t ecx = eax;
            eax <<= 0x1D;
            ecx >>= 0x03;
            ecx |= eax;
            ecx += 0x32BEE2A5;
            ecx ^= 0xE58A30D8;
            p[ i ] = ecx;
        }
        return il2cpp_get_handle( mem, rax );
    }

    inline uintptr_t entity_list( memify& mem, uintptr_t a1 )
    {
        uintptr_t rax = mem.Read<uintptr_t>( a1 + 0x18 );
        uint32_t* p   = reinterpret_cast<uint32_t*>( &rax );
        for ( uint32_t i = 0; i < 2; ++i )
        {
            uint32_t ecx = p[ i ];
            uint32_t eax = p[ i ];
            eax <<= 0x0A;
            ecx >>= 0x16;
            ecx |= eax;
            ecx ^= 0xF6BF245D;
            eax  = ecx;
            ecx <<= 0x0F;
            eax >>= 0x11;
            eax |= ecx;
            eax ^= 0x9BBD4311;
            p[ i ] = eax;
        }
        return il2cpp_get_handle( mem, rax );
    }

    inline uintptr_t player_inventory( memify& mem, uintptr_t a1 )
    {
        uintptr_t rax = mem.Read<uintptr_t>( a1 + 0x18 );
        uint32_t* p   = reinterpret_cast<uint32_t*>( &rax );
        for ( uint32_t i = 0; i < 2; ++i )
        {
            uint32_t eax = p[ i ];
            eax += 0x482D6B3D;
            uint32_t ecx = eax;
            eax += eax;
            ecx >>= 0x1F;
            ecx |= eax;
            ecx += 0x08805855;
            eax  = ecx;
            ecx <<= 0x1F;
            eax >>= 0x01;
            eax |= ecx;
            p[ i ] = eax;
        }
        return il2cpp_get_handle( mem, rax );
    }

    inline uintptr_t player_eyes( memify& mem, uintptr_t a1 )
    {
        uintptr_t rax = mem.Read<uintptr_t>( a1 + 0x18 );
        uint32_t* p   = reinterpret_cast<uint32_t*>( &rax );
        for ( uint32_t i = 0; i < 2; ++i )
        {
            uint32_t ecx = p[ i ];
            uint32_t eax = p[ i ];
            ecx >>= 0x06;
            eax <<= 0x1A;
            ecx |= eax;
            ecx ^= 0x441ADFFD;
            ecx -= 0x426353FC;
            p[ i ] = ecx;
        }
        return il2cpp_get_handle( mem, rax );
    }

    inline uint64_t cl_active_item( uint64_t a1 )
    {
        uint64_t  val = a1;
        uint32_t* p   = reinterpret_cast<uint32_t*>( &val );
        for ( uint32_t i = 0; i < 2; ++i )
        {
            uint32_t edx = p[ i ];
            uint32_t eax = p[ i ];
            edx >>= 0x02;
            eax <<= 0x1E;
            edx |= eax;
            edx ^= 0x4ED09CE6;
            edx -= 0x2521E783;
            p[ i ] = edx;
        }
        return val;
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
