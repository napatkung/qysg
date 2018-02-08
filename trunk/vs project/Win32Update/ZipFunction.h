#pragma once
#include "zip.h"
#include "unzip.h"


namespace ZipUtils
{
	// ------------------------------------------------------------------------------------------------------------------------
	// Summary:
	//   解压zip文件到指定路径, 并返回解压文件路径和文件名。
	// Parameters:
	//   lpszZipFullName   - 待解压 zip压缩包所在文件夹路径和zip压缩名称; 如"D://00//1.zip"。
	//   szFilePathArr     - 保存的解压后文件的文件名；如"1.jpg"。	
	//   lpszUnZipPath     - 解压出来的文件 所存放位置的完整路径; 如 “D://01”
	//                       此参数省略时，默认解压到exe程序所在文件夹下。
	// Returns:
	//   解压成功返回ZR_OK，解压失败返回错误码。
	// ------------------------------------------------------------------------------------------------------------------------
	ZRESULT ExtractZipToDir(LPCTSTR lpszZipFullName, CStringArray& szFilePathArr, LPCTSTR lpszUnZipPath = NULL);

	// ------------------------------------------------------------------------------------------------------------------------
	// Summary:
	//   压缩指定路径下的文件，并保存压缩包到指定路径。
	// Parameters:
	//   lpszSrcPath        - 待压缩文件所在的路径; 如"D://00"。
	//   lpszDestPath       - 压缩完成后，存放压缩包的路径。
	//                        此参数省略时，默认存放路径为exe程序所在文件的路径。
	//   lpszZipName        - 压缩完成后，压缩的名称；如“MySkin.zip”。
	// Returns:
	//   压缩成功返回ZR_OK，压缩失败返回错误码。
	// ------------------------------------------------------------------------------------------------------------------------
	ZRESULT CompressDirToZip(LPCTSTR lpszSrcPath, LPCTSTR lpszZipName, LPCTSTR lpszDestPath = NULL);
}