@class NSUUID, NSObject;
@protocol OS_dispatch_queue, HMDFairPlaySAPSessionDelegate;

@interface HMDFairPlaySAPSession : HMFObject

@property (readonly, nonatomic) struct FPSAPContextOpaque_ { } *session;
@property (readonly, nonatomic) struct FairPlayHWInfo_ { unsigned int IDLength; unsigned char ID[20]; } hardwareInfo;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, weak) id<HMDFairPlaySAPSessionDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) NSUUID *sessionIdentifier;

- (void)close;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void).cxx_destruct;
- (void)_closeWithError:(id)a0;
- (void)_teardown;
- (void)_handleServerCertificate:(id)a0 error:(id)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_handleServerSAPExchangeData:(id)a0 error:(id)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_setupSAPSessionWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)openWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)signatureForData:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)verifySignedData:(id)a0 signature:(id)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;

@end
