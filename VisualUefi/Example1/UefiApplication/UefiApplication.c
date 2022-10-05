/******************************************

	注意：使用 Release x64 编译

	修改： ... 项目 -> 右键属性 -> 配置属性 -> 调试 -> 命令参数：
	指定其中一个参数为：-drive file=fat:rw:..\Example1\$(Platform)\$(Configuration)\

******************************************/
#include <Uefi.h>
#include <Library/UefiLib.h>

// 我们可以在任何 UEFI 规范上 运行它
/*extern*/ CONST UINT32 _gUefiDriverRevision = 0;

// 必须有
// our name
CHAR8* gEfiCallerBaseName = "Uefi App";

// 必须有
EFI_STATUS EFIAPI UefiMain(IN EFI_HANDLE ImageHandle, IN EFI_SYSTEM_TABLE* SystemTable)
{
	Print(L"Hello World!!!\n"); // 不支持中文字符串

	return EFI_SUCCESS;
}

// 必须有
EFI_STATUS EFIAPI UefiUnload(IN EFI_HANDLE ImageHandle)
{
	// your code

	return EFI_SUCCESS;
}