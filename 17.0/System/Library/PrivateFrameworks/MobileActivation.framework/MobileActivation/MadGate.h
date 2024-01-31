@class NSXPCConnection;

@interface MadGate : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void)dealloc;
- (BOOL)isDeviceABrick:(id *)a0;
- (BOOL)recertifyDeviceWithError:(id *)a0;
- (BOOL)reactivateDevice:(id *)a0;
- (BOOL)isUCRTAvailable:(id *)a0;
- (id)copyUCRTVersionInfo:(id *)a0;
- (BOOL)deactivateDevice:(id *)a0;
- (id)copyPCRTToken:(id *)a0;
- (id)issueClientCertificateLegacy:(id)a0 error:(id *)a1;
- (id)getActivationBuild:(id *)a0;
- (id)getActivationState:(id *)a0;
- (BOOL)unbrickDevice:(id *)a0;
- (BOOL)isInFieldCollected:(id *)a0;
- (void).cxx_destruct;
- (id)getUCRTActivationLockState:(id *)a0;
- (void)updateBasebandTicket:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 baaCert:(struct __SecCertificate { } *)a1 baaIntermediateCert:(struct __SecCertificate { } *)a2 options:(id)a3 withCompletion:(id /* block */)a4;
- (id)copyDCRT:(id)a0 withError:(id *)a1;
- (struct __SecIdentity { } *)copyLegacyDeviceIdentity:(id *)a0;
- (BOOL)issueUCRT:(id)a0 withError:(id *)a1;
- (id)createActivationInfo:(id *)a0;
- (BOOL)deleteLegacyDeviceIdentity:(id *)a0;
- (void)issueDCRT:(id)a0 withCompletion:(id /* block */)a1;
- (id)createTunnel1ActivationInfo:(id)a0 options:(id)a1 error:(id *)a2;
- (id)getDCRTState:(id)a0 withError:(id *)a1;
- (id)createTunnel1SessionInfo:(id *)a0;
- (BOOL)ucrtUpgradeRequired:(id *)a0;
- (BOOL)handleActivationInfoWithSession:(id)a0 activationSignature:(id)a1 error:(id *)a2;
- (BOOL)handleActivationInfo:(id)a0 withError:(id *)a1;
- (id)copyActivationRecord:(id *)a0;

@end
