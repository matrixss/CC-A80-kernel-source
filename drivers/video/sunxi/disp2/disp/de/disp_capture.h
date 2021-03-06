
#ifndef __DISP_CAPTURE_H__
#define __DISP_CAPTURE_H__

#include "disp_private.h"

s32 disp_capture_start(struct disp_capture *cptr);
s32 disp_capture_stop(struct disp_capture *cptr);
s32 disp_capture_commit(struct disp_capture *cptr, disp_capture_info *info);
s32 disp_capture_set_manager(struct disp_capture *cptr, struct disp_manager *mgr);
s32 disp_capture_unset_manager(struct disp_capture *cptr);
s32 disp_capture_init(struct disp_capture *cptr);
s32 disp_capture_exit(struct disp_capture *cptr);
s32 disp_capture_sync(struct disp_capture *cptr);
s32 disp_init_capture(disp_bsp_init_para *para);

#endif
