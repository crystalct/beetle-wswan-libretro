#ifndef _GENERAL_H
#define _GENERAL_H

#include <string>

void GetFileBase(const char *f);

std::string MDFN_MakeFName(int type, int id1, const char *cd1);

typedef enum
{
 MDFNMKF_STATE = 0,
 MDFNMKF_SNAP,
 MDFNMKF_SAV,
 MDFNMKF_CHEAT,
 MDFNMKF_PALETTE,
 MDFNMKF_IPS,
 MDFNMKF_MOVIE,
 MDFNMKF_AUX,
 MDFNMKF_SNAP_DAT,
 MDFNMKF_CHEAT_TMP,
 MDFNMKF_FIRMWARE
} MakeFName_Type;

std::string MDFN_MakeFName(MakeFName_Type type, int id1, const char *cd1);

const char * GetFNComponent(const char *str);

void MDFN_GetFilePathComponents(const std::string &file_path, std::string *dir_path_out, std::string *file_base_out = NULL, std::string *file_ext_out = NULL);
std::string MDFN_EvalFIP(const std::string &dir_path, const std::string &rel_path, bool skip_safety_check = false);
#endif
