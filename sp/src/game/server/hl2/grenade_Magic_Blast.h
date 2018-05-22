#ifndef GRENADE_MAGIC_H
#define GRENADE_MAGIC_H
#pragma once

class MagicBlast;
struct edict_t;

MagicBlast *Fraggrenade_Create( const Vector &position, const QAngle &angles, const Vector &velocity, const AngularImpulse &angVelocity, CBaseEntity *pOwner, float timer);
