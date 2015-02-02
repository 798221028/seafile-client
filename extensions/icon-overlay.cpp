#include "ext-common.h"
#include "ext-utils.h"
#include "shell-ext.h"
#include "log.h"
#include "commands.h"

#include <string>

// "The Shell calls IShellIconOverlayIdentifier::GetOverlayInfo to request the
//  location of the handler's icon overlay. The icon overlay handler returns
//  the name of the file containing the overlay image, and its index within
//  that file. The Shell then adds the icon overlay to the system image list."

STDMETHODIMP ShellExt::GetOverlayInfo(LPWSTR pwszIconFile, int cchMax, int* pIndex, DWORD* pdwFlags)
{
    seaf_ext_log ("GetOverlayInfo called!");
    return S_FALSE;
}

STDMETHODIMP ShellExt::GetPriority(int *priority)
{
    /* The priority value can be 0 ~ 100, with 0 be the highest */
    *priority = 0;
    return S_OK;
}


// "Before painting an object's icon, the Shell passes the object's name to
//  each icon overlay handler's IShellIconOverlayIdentifier::IsMemberOf
//  method. If a handler wants to have its icon overlay displayed,
//  it returns S_OK. The Shell then calls the handler's
//  IShellIconOverlayIdentifier::GetOverlayInfo method to determine which icon
//  to display."

STDMETHODIMP ShellExt::IsMemberOf(LPCWSTR pwszPath, DWORD dwAttrib)
{
    seaf_ext_log ("IsMemberOf called!");
    return S_FALSE;
}
