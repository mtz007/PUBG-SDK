#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.27) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WindowsFileUtility.WFUFileListInterface
// 0x0000 (0x0028 - 0x0028)
class UWFUFileListInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WindowsFileUtility.WFUFileListInterface");
		return ptr;
	}


	void OnListFileFound(const struct FString& Filename, int ByteCount, const struct FString& FilePath);
	void OnListDone(const struct FString& DirectoryPath, TArray<struct FString> Files, TArray<struct FString> Folders);
	void OnListDirectoryFound(const struct FString& DirectoryName, const struct FString& FilePath);
};


// Class WindowsFileUtility.WFUFileListLambdaDelegate
// 0x0058 (0x0080 - 0x0028)
class UWFUFileListLambdaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WindowsFileUtility.WFUFileListLambdaDelegate");
		return ptr;
	}

};


// Class WindowsFileUtility.WFUFolderWatchInterface
// 0x0000 (0x0028 - 0x0028)
class UWFUFolderWatchInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WindowsFileUtility.WFUFolderWatchInterface");
		return ptr;
	}


	void OnFileChanged(const struct FString& Filename, const struct FString& FilePath);
	void OnDirectoryChanged(const struct FString& DirectoryName, const struct FString& DirectoryPath);
};


// Class WindowsFileUtility.WFUFolderWatchLambdaDelegate
// 0x0058 (0x0080 - 0x0028)
class UWFUFolderWatchLambdaDelegate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WindowsFileUtility.WFUFolderWatchLambdaDelegate");
		return ptr;
	}

};


// Class WindowsFileUtility.WindowsFileUtilityFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UWindowsFileUtilityFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WindowsFileUtility.WindowsFileUtilityFunctionLibrary");
		return ptr;
	}


	void STATIC_WatchFolder(const struct FString& FullPath, class UObject* WatcherDelegate);
	void STATIC_StopWatchingFolder(const struct FString& FullPath, class UObject* WatcherDelegate);
	bool STATIC_MoveFileTo(const struct FString& From, const struct FString& To);
	void STATIC_ListContentsOfFolder(const struct FString& FullPath, class UObject* ListDelegate);
	bool STATIC_DeleteFolderRecursively(const struct FString& FullPath);
	bool STATIC_DeleteFileAt(const struct FString& FullPath);
	bool STATIC_DeleteEmptyFolder(const struct FString& FullPath);
	bool STATIC_CreateDirectoryAt(const struct FString& FullPath);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
