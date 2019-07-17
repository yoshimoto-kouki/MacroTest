// MacroTest.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include "pch.h"
#include <iostream>
#define _CRTDBG_MAP_ALLOC

//定数マクロ
#define MY_SIZE 30 

//関数マクロ
#define MY_LOG(log)printf("File:%sLine:%d Func:%s Log:%s\n",__FILE__,__LINE__,__func__,log)

#ifdef _DEBUG


#define DBG_NEW new(_NORMAL_BLOCK,__FILE__,__LINE__)

#else

#define DBG_NEW new

#endif

struct PointData {
	int x;
	int y;
	int z;
};

int main(){
#ifdef kyosimoto
std::cout << "HELLO yosimoto!\n";
#elif yoshimoto
std::cout << "Hello yoshimoto\n";
#elif rtamura
std::cout << "Hello rtamura\n";
#elif yoshimoto
	std::cout << "リーダー！メンヴァーはリーダーからしか見えないそうです！";
#elif ysimoura
	std::cout << "Hallo Kitty!";
#else
std::wcout << "WHO?\n";
#endif


#ifdef ysimoura
std::cout << "悪夢再び！マージするがいい！";
#elif yoshimoto
std::cout << "３度目の更新だったり…";
#endif

	printf("my size:%d\n", MY_SIZE);
	MY_LOG("test");
	PointData*pPointData = DBG_NEW PointData;
	_CrtDumpMemoryLeaks();

}

