//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose:		magic_blast weapon
//
// $Workfile:     $
// $Date:         $
//
//-----------------------------------------------------------------------------
// $Log: $
//
// $NoKeywords: $
//=============================================================================//

#include "basehlcombatweapon.h"

#ifndef	WEAPON_MAGIC_BLAST_H
#define	WEAPON_MAGIC_BLAST_H

class CGrenade_magic_blast;

class CWeaponmagic_blast : public CBaseHLCombatWeapon
{
public:
	DECLARE_CLASS(CWeaponmagic_blast, CBaseHLCombatWeapon);

	DECLARE_SERVERCLASS();

private:
	int					m_nNumAmmoTypes;
	bool				m_bNeedDraw;
	int					m_iThrowBits;				// Save the current throw bits state
	float				m_fNextThrowCheck;			// When to check throw ability next
	Vector				m_vecTossVelocity;

public:

	void				Precache(void);
	void				Spawn(void);

	void				DrawAmmo(void);

	virtual	int			WeaponRangeAttack1Condition(float flDot, float flDist);
	virtual	bool		WeaponLOSCondition(const Vector &ownerPos, const Vector &targetPos, bool bSetConditions);

	void				SetPickupTouch(void);
	void				magic_blastTouch(CBaseEntity *pOther);	// default weapon touch

	int					CapabilitiesGet(void) { return bits_CAP_WEAPON_RANGE_ATTACK1; }

	bool				ObjectInWay(void);

	void				Throwmagic_blast(const Vector &vecSrc, const Vector &vecVelocity);
	void				ItemPostFrame(void);
	void				PrimaryAttack(void);
	void				SecondaryAttack(void);

	void				Operator_HandleAnimEvent(animevent_t *pEvent, CBaseCombatCharacter *pOperator);

	DECLARE_ACTTABLE();
	DECLARE_DATADESC();

	CWeaponmagic_blast(void);
};

#endif	//WEAPON_magic_blast_H
