@class NSObject;
@protocol OS_dispatch_queue;

@interface _SFKeychainManager : NSObject

@property (retain) NSObject<OS_dispatch_queue> *keychainManagerQueue;
@property (retain) NSObject<OS_dispatch_queue> *keychainReplyQueue;

+ (id)defaultOverCommitManager;
+ (id)defaultManager;

- (void)setIdentity:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2 resultHandler:(id /* block */)a3;
- (struct __CFDictionary { } *)_privateKeyAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;
- (struct __CFDictionary { } *)_publicKeyAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;
- (void)identityForIdentifier:(id)a0 resultHandler:(id /* block */)a1;
- (BOOL)setIdentity:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2 error:(id *)a3;
- (struct __CFDictionary { } *)_commonKeyAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;
- (void)removeItemWithIdentifier:(id)a0 resultHandler:(id /* block */)a1;
- (int)generateAttributesForIdentityAndAddToKeychain:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2;
- (void).cxx_destruct;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)findPrivateKeyWithIdentifier:(id)a0 certificate:(id *)a1 attributes:(struct __CFDictionary **)a2 result:(int *)a3;
- (id)initManager;
- (void)keysFilteredBy:(id)a0 resultHandler:(id /* block */)a1;
- (id)_symmetricKeyAttributesForIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;
- (id)identityForIdentifier:(id)a0;
- (void)keyForIdentifier:(id)a0 specifier:(id)a1 resultHandler:(id /* block */)a2;
- (id)publicKeyLookupWithIdentifier:(id)a0 certificate:(id)a1 result:(int)a2;
- (id)initOverCommitManager;
- (void)identitiesFilteredBy:(id)a0 resultHandler:(id /* block */)a1;
- (id)foundPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 certificate:(id)a1;
- (void)setKey:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2 resultHandler:(id /* block */)a3;
- (struct __CFDictionary { } *)_certificateAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1;

@end
