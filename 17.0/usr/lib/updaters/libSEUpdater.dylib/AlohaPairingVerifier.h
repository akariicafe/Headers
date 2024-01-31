@class NSData, SETransceiveHelper;

@interface AlohaPairingVerifier : NSObject {
    const struct AlohaVerificationOptions { BOOL x0; BOOL x1; } *_options;
    SETransceiveHelper *_transceiver;
    NSData *_seid;
}

- (void)invalidate;
- (void).cxx_destruct;
- (id)getSharingRequestWithSignature:(id *)a0 withError:(id *)a1;
- (id)initWithController:(struct shared_ptr<SEUpdater::P73BaseSEController> { struct P73BaseSEController *x0; struct __shared_weak_count *x1; })a0 options:(const struct AlohaVerificationOptions { BOOL x0; BOOL x1; } *)a1;
- (BOOL)injectSEPKtoSSE:(id *)a0;
- (BOOL)injectSEPKtoSSE_Debug:(id *)a0;
- (BOOL)injectSEPKtoSSE_FDR:(id *)a0;
- (id)performAlohaVerification;
- (id)performAuthKeySharingWithAppleSSE:(id)a0 sharingRequest:(id)a1 requestSignature:(id)a2 resultSignature:(id *)a3 withError:(id *)a4;

@end
