#include <stdlib.h>
#include "libavutil/float_dsp.h"

int ff_get_cpu_flags_aarch64(void) {
	return 0;
}

int ff_get_cpu_flags_arm(void) {
	return 0;
}

int ff_get_cpu_flags_ppc(void) {
	return 0;
}

size_t ff_get_cpu_max_align_aarch64(void) {
	return 0;
}

size_t ff_get_cpu_max_align_arm(void) {
	return 0;
}

size_t ff_get_cpu_max_align_ppc(void) {
	return 0;
}

void ff_float_dsp_init_aarch64(AVFloatDSPContext *fdsp) {

}

void ff_float_dsp_init_arm(AVFloatDSPContext *fdsp) {

}

void ff_float_dsp_init_ppc(AVFloatDSPContext *fdsp, int strict) {

}

void ff_float_dsp_init_mips(AVFloatDSPContext *fdsp) {

}
