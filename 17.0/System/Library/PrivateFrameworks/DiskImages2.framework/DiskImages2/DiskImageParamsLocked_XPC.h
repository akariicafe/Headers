@interface DiskImageParamsLocked_XPC : DiskImageParamsXPC

- (struct unique_ptr<const info::DiskImageInfo, std::default_delete<const info::DiskImageInfo>> { struct __compressed_pair<const info::DiskImageInfo *, std::default_delete<const info::DiskImageInfo>> { struct DiskImageInfo *x0; } x0; })getImageInfoWithExtra:(BOOL)a0 error:(id *)a1;
- (id)initWithBackendXPC:(id)a0;
- (id)newWithPassphrase:(const char *)a0 error:(id *)a1;

@end
