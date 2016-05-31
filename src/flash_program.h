#ifndef FLASH_PROGRAM_H_
#define FLASH_PROGRAM_H_

//#include "main.h"
//typedef unsigned int uint32_t;
#include <stdint.h>

#define INFO_IN_SST
//#define INFO_IN_FLASH

#ifdef INFO_IN_SST
#define CONFIGURATION_IN_SST
#define CODES_IN_SST
#define OFFSET_FILESYSTEM	0x0000
#define OFFSET_CONFIGURATION	0x1000
#define OFFSET_FIRST_FILE	0x6000
#endif

#ifdef INFO_IN_FLASH
#define CONFIGURATION_IN_FLASH
#define CODES_IN_FLASH
#define OFFSET_FILESYSTEM	0x0000
#define FUNC_MEM
#endif

// Define the STM32F10x FLASH Page Size depending on the used STM32 device
// si es mayor a 128K la pagina es de 2KB, sino 1KB

//#define FLASH_PAGE_SIZE    ((uint16_t)0x400)
#define FLASH_PAGE_SIZE			1024
#define FLASH_PAGE_SIZE_DIV2	512
#define FLASH_PAGE_SIZE_DIV4	256

#define PAGE28_START	0
#define PAGE29_START	256
#define PAGE30_START	512
#define PAGE31_START	768
#define PAGE31_END		1023

#define PAGE27			((uint32_t)0x08006C00)
#define PAGE28			((uint32_t)0x08007000)
#define PAGE29			((uint32_t)0x08007400)
#define PAGE30			((uint32_t)0x08007800)
#define PAGE31			((uint32_t)0x08007C00)

typedef union mem_bkp {
		unsigned int v_bkp [FLASH_PAGE_SIZE_DIV4];
		unsigned char v_bkp_8u [FLASH_PAGE_SIZE];
		unsigned short v_bkp_16u [FLASH_PAGE_SIZE_DIV2];
} mem_bkp_typedef;

typedef struct parameters {

	//para Boton 1
	unsigned char b1t;
	unsigned char b1r;
	//para Boton 2
	unsigned char b2t;
	unsigned char b2r;
	//para Boton 3
	unsigned char b3t;
	unsigned char b3r;
	//para Boton 4
	unsigned char b4t;
	unsigned char b4r;

	unsigned short interdigit;
	unsigned short wait_for_code;

} parameters_typedef;

typedef struct filesystem {

	//para num0
	unsigned int posi0;
	unsigned int lenght0;
	//para num1
	unsigned int posi1;
	unsigned int lenght1;
	//para num2
	unsigned int posi2;
	unsigned int lenght2;
	//para num3
	unsigned int posi3;
	unsigned int lenght3;
	//para num4
	unsigned int posi4;
	unsigned int lenght4;
	//para num5
	unsigned int posi5;
	unsigned int lenght5;
	//para num6
	unsigned int posi6;
	unsigned int lenght6;
	//para num7
	unsigned int posi7;
	unsigned int lenght7;
	//para num8
	unsigned int posi8;
	unsigned int lenght8;
	//para num9
	unsigned int posi9;
	unsigned int lenght9;

} filesystem_typedef;


typedef enum {FAILED = 0, PASSED = !FAILED} TestStatus;

//-------- Functions -------------
unsigned char ReadMem (void);

unsigned char EraseAllMemory_FLASH(void);
void BackupPage(unsigned int *, unsigned int *);
void ErasePage(uint32_t , unsigned char );
unsigned char UpdateNewCode(unsigned int *, unsigned short, unsigned int);
unsigned char WritePage(unsigned int *, uint32_t, unsigned char);
unsigned char Write_Code_To_Memory_FLASH(unsigned short, unsigned int);
unsigned char WriteConfigurations (void);
void LoadFilesIndex (void);
void UpdateFileIndex (unsigned char, unsigned int, unsigned int);
void SaveFilesIndex (void);
void Load16SamplesShort (unsigned short *, unsigned int);
void Load16SamplesChar (unsigned char *, unsigned int);
void ShowFileSystem(void);
void LoadConfiguration (void);
void ShowConfiguration (void);

#endif
