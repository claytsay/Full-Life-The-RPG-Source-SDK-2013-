#ifndef GRENADE_FRAG_H
#define GRENADE_FRAG_H
#pragma once
4
​
5
class CBaseGrenade;
struct edict_t;

CBaseGrenade *Fraggrenade_Create( const Vector &position, const QAngle &angles, const Vector &velocity, const AngularImpulse &angVelocity, CBaseEntity *pOwner, float timer, bool combineSpawned );
