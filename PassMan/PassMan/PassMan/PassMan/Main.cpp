

#include "REGIS.h"
#include "welcome.h"
#include "Main.h"
#include "Login.h"
#include <Windows.h>
#include "operation.h"

using namespace PassMan; 


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)

{

	
	
	std::basic_string<TCHAR> FilePath = TEXT("C:\\PassMan\\");

	Operation::CreateFolder(FilePath);


	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew welcome());

	return 0;

}
