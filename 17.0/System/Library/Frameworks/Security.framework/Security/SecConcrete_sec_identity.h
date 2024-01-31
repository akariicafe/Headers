@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SecConcrete_sec_identity : NSObject <OS_sec_identity> {
    struct __SecIdentity { } *identity;
    struct __CFArray { } *certs;
    id /* block */ sign_block;
    id /* block */ decrypt_block;
    NSObject<OS_dispatch_queue> *operation_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0;
- (void).cxx_destruct;
- (id)initWithCertificates:(struct __CFArray { } *)a0 signBlock:(id /* block */)a1 decryptBlock:(id /* block */)a2 queue:(id)a3;
- (id)initWithIdentityAndCertificates:(struct __SecIdentity { } *)a0 certificates:(struct __CFArray { } *)a1;

@end
