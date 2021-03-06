/*
** svn $Id$
*******************************************************************************
** Copyright (c) 2002-2016 The ROMS/TOMS Group
**
**   Licensed under a MIT/X style license
**
**   See License_ROMS.txt
**
*******************************************************************************
**
**  Options for dynamical downscaling of IPCC AR4 GISS AOM results
**  to the 10 km Atlantic-Arctic grid
*/

#if defined CASPIAN
!#define INLINE_2DIO        /* define if processing 3D IO level by level */
!#define NO_HIS              /* define if no history files to be created or written */
#undef RST_SINGLE
#define PERFECT_RESTART
#define ERA40               /* 20C3M 1981-2000 but with ERA40 */
#define WET_DRY
#undef  STATIONS
#undef  DIAGNOSTIC
#define CURVGRID
#define UV_ADV
#define UV_COR
!#define UV_VIS2
#undef  UV_VIS4
!#define VISC_3DCOEF
!#define UV_SMAGORINSKY
#undef  UV_U3ADV_SPLIT
#define MIX_S_UV
#undef  MIX_GEO_UV
#define UV_SADVECTION
!#define UV_C4VADVECTION
#undef  VISC_GRID
#define NONLIN_EOS
#undef  WJ_GRADP
#define DJ_GRADPS
!#define TS_DIF2
!#define  TS_DIF4
!#define MIX_GEO_TS
!#define MIX_S_TS
!#define  DIFF_GRID
!#define DIFF_3DCOEF
!#define TS_SMAGORINSKY
#undef  TS_U3ADV_SPLIT
#undef  TS_U3HADVECTION
#undef  TS_A4HADVECTION
!#define TS_C4HADVECTION
!#define TS_C4VADVECTION
#undef  TS_A4VADVECTION
#undef  TS_SVADVECTION
#define TS_MPDATA
#define SALINITY
#define SOLVE3D
#undef  BODYFORCE
# define SPLINES_VDIFF
# define SPLINES_VVISC
# define RI_SPLINES
#define MASKING
#define AVERAGES
!#define AVERAGES_DETIDE
#define UV_QDRAG        /* turn ON or OFF quadratic bottom friction */
#define LIMIT_BSTRESS
#undef  MY25_MIXING
#define  GLS_MIXING
#ifdef GLS_MIXING
#  define  N2S2_HORAVG
#endif
#undef  LMD_MIXING
#ifdef LMD_MIXING
# define LMD_RIMIX
# define LMD_CONVEC
# define LMD_SKPP
# undef  LMD_BKPP
# define LMD_NONLOCAL
# define LMD_DDMIX
#endif
#define ANA_BSFLUX
#define ANA_BTFLUX
#undef  ANA_GRID
#undef  ANA_INITIAL
#undef  ANA_MASK
#undef  ANA_MEANRHO
#define ANA_SSFLUX
#define ANA_STFLUX
#undef  ANA_SMFLUX
#undef  ANA_SRFLUX
#undef  ANA_VMIX
#undef  ANA_CLOUD
#undef  ANA_AIRT
#undef  ANA_DEWT
#undef  ANA_SLP
#undef  ANA_WINDS

#undef  SCORRECTION


!#define SSH_TIDES       /* turn on computation of tidal elevation */
!#define UV_TIDES        /* turn on computation of tidal currents */
!!#define ADD_FSOBC       /* Add tidal elevation to processed OBC data */
!!#define ADD_M2OBC       /* Add tidal currents  to processed OBC data */
!#define RAMP_TIDES      /* Spin up tidal forcing */
!#define TIDES_ASTRO     /* apply nodal corrections */
!#define POT_TIDES        /* turn on computation of tidal potential */

#define ICE_MODEL
# ifdef ICE_MODEL
#  define ICE_SHOREFAST
#  define ICE_THERMO
#    define ICE_MK
#    undef ICE_ALB_EC92
#  define ICE_MOMENTUM
#  define ICE_BULK_FLUXES
#    undef  ICE_MOM_BULK
#    define ICE_EVP
#  define ICE_ADVECT
#    define ICE_SMOLAR
#    define ICE_UPWIND
# endif

#define SPECIFIC_HUMIDITY

#undef  CCSM_FLUXES
#define BULK_FLUXES
#ifdef  BULK_FLUXES
# ifdef ICE_MODEL
#  define ICE_BULK_FLUXES
# endif
# define EMINUSP
# define EMINUSP_SSH
# define ALBEDO_CLOUD
# ifdef ERA40
#  define CLOUDS
#  define LONGWAVE
#  define COOL_SKIN
#  define ANA_SRFLUX
#  define SHORTWAVE
# else
#  undef  CLOUDS
#  define LONGWAVE_OUT
#  define COOL_SKIN
#  undef  ANA_SRFLUX
#  define SHORTWAVE
# endif
#endif

#undef  NCEP_FLUXES

#undef  RUNOFF

#define SOLAR_SOURCE
#undef  SLP_GRAD

#undef   SSSFLX

#endif
