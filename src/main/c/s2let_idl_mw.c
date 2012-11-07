// S2LET package
// Copyright (C) 2012 
// Boris Leistedt & Jason McEwen

#include "s2let.h"

/*
 * IDL integer types. For historical reasons, we use UCHAR for TYP_BYTE
 * instead of defining an IDL_BYTE type.
 */
#if defined(ALPHA_OSF) || defined(SUN_64) || defined(LINUX_X86_64) || defined(HPUX_64) || defined(IRIX_64) || defined(AIX_64)
#define IDL_SIZEOF_C_LONG 8
#else
#define IDL_SIZEOF_C_LONG 4
#endif
#if (IDL_SIZEOF_C_LONG == 8) || defined(MSWIN_64)
#define IDL_SIZEOF_C_PTR  8
#else
#define IDL_SIZEOF_C_PTR  4
#endif
typedef short IDL_INT;
typedef unsigned short IDL_UINT;
#if IDL_SIZEOF_C_LONG == 8
typedef int IDL_LONG;
typedef unsigned int IDL_ULONG;
#elif IDL_SIZEOF_C_LONG == 4
typedef long IDL_LONG;
typedef unsigned long IDL_ULONG;
#else
#error "IDL_LONG not defined --- unexpected value of IDL_SIZEOF_C_LONG"
#endif


int s2let_idl_axisym_mw_wav_analysis_real(int argc, void* argv[])  
{  
  if(argc != 6) return 0;  
  double *f_wav = (double *) argv[0];
  double *f_scal = (double *) argv[1];
  double *f = (double *) argv[2];
  IDL_INT *B = (IDL_INT *) argv[3];
  IDL_INT *L = (IDL_INT *) argv[4];
  IDL_INT *J_min = (IDL_INT *) argv[5];

  s2let_axisym_mw_wav_analysis_real(f_wav, f_scal, f, *B, *L, *J_min);

  return 1;  
}    

int s2let_idl_axisym_mw_wav_synthesis_real(int argc, void* argv[])  
{  
  if(argc != 6) return 0;  
  double *f = (double *) argv[0];
  double *f_wav = (double *) argv[1];
  double *f_scal = (double *) argv[2];
  IDL_INT *B = (IDL_INT *) argv[3];
  IDL_INT *L = (IDL_INT *) argv[4];
  IDL_INT *J_min = (IDL_INT *) argv[5];

  s2let_axisym_mw_wav_synthesis_real(f, f_wav, f_scal, *B, *L, *J_min);

  return 1;  
}    


int s2let_idl_axisym_mw_wav_analysis(int argc, void* argv[])  
{  
  if(argc != 6) return 0;  
  complex double *f_wav = (complex double *) argv[0];
  complex double *f_scal = (complex double *) argv[1];
  complex double *f = (complex double *) argv[2];
  IDL_INT *B = (IDL_INT *) argv[3];
  IDL_INT *L = (IDL_INT *) argv[4];
  IDL_INT *J_min = (IDL_INT *) argv[5];

  s2let_axisym_mw_wav_analysis(f_wav, f_scal, f, *B, *L, *J_min);

  return 1;  
}    

int s2let_idl_axisym_mw_wav_synthesis(int argc, void* argv[])  
{  
  if(argc != 6) return 0;  
  complex double *f = (complex double *) argv[0];
  complex double *f_wav = (complex double *) argv[1];
  complex double *f_scal = (complex double *) argv[2];
  IDL_INT *B = (IDL_INT *) argv[3];
  IDL_INT *L = (IDL_INT *) argv[4];
  IDL_INT *J_min = (IDL_INT *) argv[5];

  s2let_axisym_mw_wav_synthesis(f, f_wav, f_scal, *B, *L, *J_min);

  return 1;  
}    


int s2let_idl_axisym_mw_wav_analysis_multires(int argc, void* argv[])  
{  
  if(argc != 6) return 0;  
  complex double *f_wav = (complex double *) argv[0];
  complex double *f_scal = (complex double *) argv[1];
  complex double *f = (complex double *) argv[2];
  IDL_INT *B = (IDL_INT *) argv[3];
  IDL_INT *L = (IDL_INT *) argv[4];
  IDL_INT *J_min = (IDL_INT *) argv[5];

  s2let_axisym_mw_wav_analysis_multires(f_wav, f_scal, f, *B, *L, *J_min);

  return 1;  
}    

int s2let_idl_axisym_mw_wav_synthesis_multires(int argc, void* argv[])  
{  
  if(argc != 6) return 0;  
  complex double *f = (complex double *) argv[0];
  complex double *f_wav = (complex double *) argv[1];
  complex double *f_scal = (complex double *) argv[2];
  IDL_INT *B = (IDL_INT *) argv[3];
  IDL_INT *L = (IDL_INT *) argv[4];
  IDL_INT *J_min = (IDL_INT *) argv[5];

  s2let_axisym_mw_wav_synthesis_multires(f, f_wav, f_scal, *B, *L, *J_min);

  return 1;  
}    

int s2let_idl_axisym_mw_wav_analysis_multires_real(int argc, void* argv[])  
{  
  if(argc != 6) return 0;  
  double *f_wav = (double *) argv[0];
  double *f_scal = (double *) argv[1];
  double *f = (double *) argv[2];
  IDL_INT *B = (IDL_INT *) argv[3];
  IDL_INT *L = (IDL_INT *) argv[4];
  IDL_INT *J_min = (IDL_INT *) argv[5];

  s2let_axisym_mw_wav_analysis_multires_real(f_wav, f_scal, f, *B, *L, *J_min);

  return 1;  
}    

int s2let_idl_axisym_mw_wav_synthesis_multires_real(int argc, void* argv[])  
{  
  if(argc != 6) return 0;  
  double *f = (double *) argv[0];
  double *f_wav = (double *) argv[1];
  double *f_scal = (double *) argv[2];
  IDL_INT *B = (IDL_INT *) argv[3];
  IDL_INT *L = (IDL_INT *) argv[4];
  IDL_INT *J_min = (IDL_INT *) argv[5];

  s2let_axisym_mw_wav_synthesis_multires_real(f, f_wav, f_scal, *B, *L, *J_min);

  return 1;  
}    


int s2let_idl_mw_map2alm(int argc, void* argv[])  
{  
  if(argc != 3) return 0;  
  complex double *flm = (complex double *) argv[0];
  complex double *f = (complex double *) argv[1];
  IDL_INT *L = (IDL_INT *) argv[2];

  s2let_mw_map2alm(flm, f, *L);

  return 1;  
}    

int s2let_idl_mw_alm2map(int argc, void* argv[])  
{  
  if(argc != 3) return 0;  
  complex double *f = (complex double *) argv[0];
  complex double *flm = (complex double *) argv[1];
  IDL_INT *L = (IDL_INT *) argv[2];

  s2let_mw_alm2map(f, flm, *L);

  return 1;  
}    


int s2let_idl_mw_map2alm_real(int argc, void* argv[])  
{  
  if(argc != 3) return 0;  
  complex double *flm = (complex double *) argv[0];
  double *f = (double *) argv[1];
  IDL_INT *L = (IDL_INT *) argv[2];

  s2let_mw_map2alm_real(flm, f, *L);

  return 1;  
}    

int s2let_idl_mw_alm2map_real(int argc, void* argv[])  
{  
  if(argc != 3) return 0;  
  double *f = (double *) argv[0];
  complex double *flm = (complex double *) argv[1];
  IDL_INT *L = (IDL_INT *) argv[2];

  s2let_mw_alm2map_real(f, flm, *L);

  return 1;  
}    