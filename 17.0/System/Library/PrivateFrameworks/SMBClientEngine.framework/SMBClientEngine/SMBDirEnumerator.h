@class NSString, SMBPiston, SMB_rq, SMBNode;

@interface SMBDirEnumerator : NSObject {
    SMBPiston *pd;
    unsigned int f_shareID;
    int f_flags;
    int f_sfm_conversion;
    unsigned short f_searchCount;
    unsigned char f_infolevel;
    int f_attrmask;
    NSString *f_lookupName;
    NSString *f_createName;
    SMBNode *f_node;
    struct smb_query_dir { unsigned char fileInfoClass; unsigned char flags; unsigned int fileIndex; unsigned int fileNameFlags; unsigned int ntStatus; } f_query_inp;
    unsigned int f_query_buffer_len;
    unsigned char f_NetworkNameBuffer[1020];
    unsigned int f_NetworkNameLen;
    struct smbfattr { unsigned long long fa_valid_mask; unsigned int fa_attr; unsigned long long fa_size; unsigned long long fa_data_alloc; struct timespec { long long tv_sec; long long tv_nsec; } fa_atime; struct timespec { long long tv_sec; long long tv_nsec; } fa_chtime; struct timespec { long long tv_sec; long long tv_nsec; } fa_mtime; struct timespec { long long tv_sec; long long tv_nsec; } fa_crtime; unsigned long long fa_ino; struct timespec { long long tv_sec; long long tv_nsec; } fa_reqtime; int fa_vtype; unsigned long long fa_uid; unsigned long long fa_gid; unsigned long long fa_permissions; unsigned long long fa_nlinks; unsigned int fa_flags_mask; unsigned int fa_unix; unsigned int fa_reparse_tag; unsigned short fa_fstatus; unsigned int fa_created_disp; unsigned long long fa_rsrc_size; unsigned long long fa_rsrc_alloc; unsigned char fa_finder_info[32]; unsigned int fa_max_access; } f_attr;
    unsigned int f_eofs;
    SMB_rq *f_create_rqp;
    SMB_rq *f_query_dir_rqp;
    int f_need_close;
    unsigned int f_resume_file_index;
    unsigned int f_output_buf_len;
}

+ (void)enumeratorWithParameters:(id)a0 onShareID:(unsigned int)a1 dirName:(id)a2 lookUpName:(id)a3 searchFlags:(unsigned int)a4 outParameters:(struct smb_dir_enum_out { unsigned int x0; unsigned int x1; } *)a5 callBack:(id /* block */)a6;

- (void)dealloc;
- (int)cleanup;
- (void).cxx_destruct;
- (void)close:(struct smb_dir_enum_out { unsigned int x0; unsigned int x1; } *)a0 callBack:(id /* block */)a1;
- (int)commonInit:(id)a0 onShareID:(unsigned int)a1 dirName:(id)a2 lookUpName:(id)a3 searchFlags:(unsigned int)a4 outParameters:(struct smb_dir_enum_out { unsigned int x0; unsigned int x1; } *)a5;
- (id)init:(id)a0 onShareID:(unsigned int)a1 dirName:(id)a2 lookUpName:(id)a3 searchFlags:(unsigned int)a4 outParameters:(struct smb_dir_enum_out { unsigned int x0; unsigned int x1; } *)a5 callBack:(id /* block */)a6;
- (void)nextEntry:(id)a0 outParameters:(struct smb_dir_enum_out { unsigned int x0; unsigned int x1; } *)a1 callBack:(id /* block */)a2;
- (int)smb2_smb_parse_query_dir_both_dir_info:(struct mdchain { struct piston_mbuf *x0; struct piston_mbuf *x1; char *x2; unsigned long long x3; } *)a0;
- (int)smb2_smb_query_dir:(unsigned int *)a0;
- (int)smb2fs_smb_findnext:(unsigned int *)a0;

@end
