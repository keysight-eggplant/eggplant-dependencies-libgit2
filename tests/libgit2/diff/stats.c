#include "diff_helpers.h"
	cl_git_pass(diff_from_buffer(&diff, input, strlen(input)));