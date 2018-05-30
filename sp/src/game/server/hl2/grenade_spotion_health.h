//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
// $NoKeywords: $
//=============================================================================//

#ifndef GRENADE_SPOTION_HEALTH_H
#define GRENADE_SPOTION_HEALTH_H
#pragma once

class CBaseGrenade;
struct edict_t;

CBaseGrenade *Spotionhealth_Create( const Vector &position, const QAngle &angles, const Vector &velocity, const AngularImpulse &angVelocity, CBaseEntity *pOwner, float timer, bool combineSpawned );
//CItem *Healthkit_Create(const Vector &position, const QAngle &angles, const Vector &velocity, const AngularImpulse &angVelocity);

// These two functions don't seem very relevant; however, commenting out could create problems...
bool	Spotionhealth_WasPunted( const CBaseEntity *pEntity );
bool	Spotionhealth_WasCreatedByCombine( const CBaseEntity *pEntity );

#endif // GRENADE_SPOTION_HEALTH_H
