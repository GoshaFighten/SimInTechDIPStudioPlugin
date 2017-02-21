#include "Init.h"
#include <string.h>

void Initializer::Init(double step,
	double modeltime,
	void ** ext_vars_addr,
	double * din_vars,
	double * derivates,
	double * alg_vars,
	double * alg_funcs,
	t_state_vars * state_vars,
	t_consts * consts,
	t_local * locals,
	solver_struct * solver_data,
	void * algo_object_id)
{
	memcpy(&state_vars->mydllv0_out_0_, &mydllv0_out_0_default, sizeof(mydllv0_out_0_default));
v2_sinit__0:
	;
}
