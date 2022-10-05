#include <Uefi.h>
#include <Library/UefiLib.h>

// 我们要求至少是 UEFI 2.0
CONST UINT32 _gUefiDriverRevision = 0x200;

// 必须有
// our name
CHAR8* gEfiCallerBaseName = "Uefi Driver";

// 必须有
EFI_STATUS EFIAPI UefiMain(IN EFI_HANDLE ImageHandle, IN EFI_SYSTEM_TABLE* SystemTable)
{
	Print(L"Hello World!!!\nDriver\n"); // 不支持中文字符串

	return EFI_SUCCESS;
}

// 必须有
EFI_STATUS EFIAPI UefiUnload(IN EFI_HANDLE ImageHandle)
{
	// your code

	return EFI_SUCCESS;
}