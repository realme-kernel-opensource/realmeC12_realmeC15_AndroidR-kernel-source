#ifndef __ACM_FS_H__
#define __ACM_FS_H__

#define ACM_PKGNAME_MAX 100
#define UID_BOUNDARY 10000

// from include/uapi/linux/fuse.h
// FUSE_UNLINK	   = 10,
// FUSE_MKNOD	   = 8,
// FUSE_MKDIR	   = 9,
// FUSE_RENAME	   = 12,
// FUSE_CREATE        = 35,
// FUSE_RENAME2       = 45,

#define ACM_OP_UNLINK 10
#define ACM_OP_MKNOD 8
#define ACM_OP_CRTEAT 35
#define ACM_OP_MKDIR 9
#define ACM_OP_RENAME 12
#define ACM_OP_RENAME2 45

#define ACM_DELETE_ERR  999

#define ACM_FLAG_LOGGING (0x01)
#define ACM_FLAG_DEL (0x01 << 1)
#define ACM_FLAG_CRT (0x01 << 2)

int acm_search(struct dentry *dentry, int file_type,
               int op);
int acm_opstat(int flag);

#endif /* __ACM_FS_H__ */
