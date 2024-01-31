@interface DICryptoHelper : NSObject

+ (BOOL)BigToHostWithPubKeyHeader:(void *)a0;
+ (BOOL)createPublicKeyHeaderWithBackendXPC:(id)a0 publicKeyHeader:(void *)a1 error:(id *)a2;
+ (struct unique_ptr<crypto::auth_table_entry, std::default_delete<crypto::auth_table_entry>> { struct __compressed_pair<crypto::auth_table_entry *, std::default_delete<crypto::auth_table_entry>> { struct auth_table_entry *x0; } x0; })getAuthEntryWithBackend:(struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; })a0 authTableNumEntries:(int)a1 mechanism:(int)a2 error:(id *)a3;
+ (struct unique_ptr<char, std::function<void (char *)>> { struct __compressed_pair<char *, std::function<void (char *)>> { char *x0; struct function<void (char *)> { struct __value_func<void (char *)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; } x1; } x0; })getAuthValueWithBackend:(struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; })a0 authTableNumEntries:(int)a1 mechanism:(int)a2 error:(id *)a3;
+ (BOOL)getPassphraseUsingSaksWithBackendXPC:(id)a0 passPhrase:(char *)a1 error:(id *)a2;
+ (BOOL)getPrivateKeyWithHeader:(void *)a0 privateKey:(struct __SecKey **)a1 error:(id *)a2;
+ (BOOL)getPublicKeyWithCertificate:(id)a0 key:(struct __SecKey **)a1 error:(id *)a2;
+ (BOOL)validateWithPubKeyHeader:(void *)a0;

@end
