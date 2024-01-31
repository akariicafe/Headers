@interface TKLocalSEPRefKey : TKLocalSEPKey {
    unsigned long long _debugID;
}

@property (readonly, nonatomic) struct aks_ref_key_s { } *AKSRefKey;

- (id)_initWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 caller:(id)a5 forceSystemSession:(BOOL)a6 error:(id *)a7;
- (id)objectID;
- (void)dealloc;
- (long long)keySize;
- (id)computeSharedSecret:(id)a0 error:(id *)a1;
- (id)keyType;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (BOOL)systemSessionKey;
- (id)description;
- (id)recryptData:(id)a0 attributes:(id)a1 error:(id *)a2;
- (id)signDigest:(id)a0 error:(id *)a1;
- (id)_initWithObjectID:(id)a0 authContext:(id)a1 caller:(id)a2 forceSystemSession:(BOOL)a3 error:(id *)a4;
- (id)publicKeyWithError:(id *)a0;
- (BOOL)deleteWithError:(id *)a0;

@end
