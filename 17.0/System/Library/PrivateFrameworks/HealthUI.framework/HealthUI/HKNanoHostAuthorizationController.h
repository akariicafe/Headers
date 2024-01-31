@class NSXPCConnection;
@protocol HKHealthPrivacyHostAuthorizationControllerDelegate;

@interface HKNanoHostAuthorizationController : NSObject <HKHealthPrivacyHostRemoteViewController>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<HKHealthPrivacyHostAuthorizationControllerDelegate> delegate;

- (id)init;
- (void)show;
- (void)didFinishWithError:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_remoteObjectProxyWithCompletion:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)connectionDidInterrupt;
- (void)connectionDidInvalidate;
- (void)setRequestRecord:(id)a0 presentationRequests:(id)a1;

@end
