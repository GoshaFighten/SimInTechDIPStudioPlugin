#pragma once
/*  ------------------------------------------------------
	 Routine name:  mydll
	 Description:
	 Project file:  Код DLL.prt

------------------------------------------------------  */

/*  --- Base generator data types --- */
/* Real data type */
typedef double g_real_type;
/* Integer data type */
typedef int g_int_type;
/* Boolean data type */
typedef char g_boolean_type;
/* Complex data type */
typedef complex_64 g_complex_type;


/* Default initialization values */

/* Project signal database hash */
const unsigned int sp_database_hash_32 = 0;
/* Project sheme structure hash */
const unsigned int sp_sheme_hash_32 = 1679281830;

/* Main structures defines */
/* External variables count */
#define ext_vars_count 3
/* Internal state variables count */
#define state_vars_count 1
/*  --- Source model preferences --- */
/* Minimum integration step */
#define INTEGRATION_MIN_STEP 1E-5
/* Maximum integration step */
#define INTEGRATION_MAX_STEP 1
/* Integration synchronization step */
#define INTEGRATION_SYNC_STEP 0
/* Model integration method */
#define INTEGRATION_METHOD 5
/* Model relative error */
#define INTEGRATION_RELATIVE_ERROR 0.0001
/* Model absolute error */
#define INTEGRATION_ABSOLUTE_ERROR 1
/* Model end time */
#define INTEGRATION_END_TIME 10
/* Model maximum iteration count */
#define INTEGRATION_MAX_LOOP_ITER_COUNT 10

const unsigned int imgW = 1920;
const unsigned int imgH = 1200;

typedef double imgSize[imgW * imgH];

const imgSize img_default = { 0.0 };

const imgSize mydllv0_out_0_default = { 0.0 };


const ext_var_info_record ext_vars_names[ext_vars_count] = {
	{ "out:0", vt_double,{ imgW * imgH }, 0,dir_out,"", (void*)&img_default, sizeof(imgSize) },
	{ "out:1", vt_int,{ 1 }, 1,dir_out,"", (void*)imgW, sizeof(int) } ,
	{ "out:2", vt_int,{ 1 }, 2,dir_out,"", (void*)imgH, sizeof(int) }
};
#define out_0 (*(imgSize*)(ext_vars_addr[0]))

const ext_var_info_record state_vars_names[state_vars_count] = {
{"mydllv0_out_0",   vt_double,{ imgW * imgH }, 0, dir_inout,"Input pin state variable", (void*)&mydllv0_out_0_default, sizeof(imgSize)} ,
};
typedef struct {
	imgSize mydllv0_out_0_;
} t_state_vars;
typedef char t_consts;
typedef char t_local;
