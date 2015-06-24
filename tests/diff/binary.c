#include "git2/sys/diff.h"

	git_buf_clear(&actual);
	cl_git_pass(git_diff_print(diff, GIT_DIFF_FORMAT_PATCH, git_diff_print_callback__to_buf, &actual));

	cl_assert_equal_s(expected, actual.ptr);
