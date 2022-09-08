#include "common/common.h"
#include "utils/logger.h"
#include "main.h"


int main(int argc, char** argv)
{
	log_init();
	log_printf("\nStarting WUP Installer GX2 %s\n", WUP_GX2_VERSION);

	//! *******************************************************************
	//! *                        Call our Main                            *
	//! *******************************************************************
	Menu_Main();
	

	//! *******************************************************************
	//! *                            Exit                                 *
	//! *******************************************************************
	log_printf("WUP Installer GX2 exit...\n");
	log_deinit();

	return 0;
}
