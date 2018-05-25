//========= Copyright Ln 1, Col 33, All rights reserved. ============//
//
// Purpose: A header file for the "magic blast" grenade
// TODO: Fix this so that it actually works as intended
//
//=============================================================================//

#ifndef GRENADE_MAGIC_H
#define GRENADE_MAGIC_H
#pragma once

class MagicBlast;
struct edict_t;

MagicBlast *Fraggrenade_Create( const Vector &position, const QAngle &angles, const Vector &velocity, const AngularImpulse &angVelocity, CBaseEntity *pOwner, float timer);

#endif