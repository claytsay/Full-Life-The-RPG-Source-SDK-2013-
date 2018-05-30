//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: The header file for "splash potion" grenades
//			Once the grenades are working, come back to this to make it actually work
//			Hopefully this works... (>_<)
//
// $NoKeywords: $
//=============================================================================//

/*
#ifndef GRENADE_SPOTION_H
#define GRENADE_SPOTION_H
#pragma once

// Definitions
#define GRENADE_TIMER	3.0f // Seconds

#define GRENADE_PAUSED_NO			0
#define GRENADE_PAUSED_PRIMARY		1
#define GRENADE_PAUSED_SECONDARY	2

#define GRENADE_RADIUS	4.0f // inches

class CBaseGrenade;
struct edict_t;

CBaseGrenade *Fraggrenade_Create( const Vector &position, const QAngle &angles, const Vector &velocity, const AngularImpulse &angVelocity, CBaseEntity *pOwner, float timer, bool combineSpawned );
bool	Fraggrenade_WasPunted( const CBaseEntity *pEntity );
bool	Fraggrenade_WasCreatedByCombine( const CBaseEntity *pEntity );

#endif // GRENADE_FRAG_H
/**/
