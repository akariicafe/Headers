@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, PCCLIClientDelegate;

@interface PCCLIClient : NSObject <PCActivatable, PCBannerServerXPCInterface, PCDiagnosticServerXPCInterface> {
    NSXPCConnection *_wakingXPCCnx;
    NSXPCConnection *_xpcCnx;
}

@property (weak, nonatomic) id<PCCLIClientDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;

- (void)requestState;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_interrupted;
- (void)_xpcEnsureStarted;
- (void)_wakingXPCEnsureStarted;
- (void)didProvideState:(id)a0;
- (void)dismissBannerWithCompletion:(id /* block */)a0;
- (void)handleState:(id)a0;
- (void)presentBannerWithCompletion:(id /* block */)a0;
- (void)setBannerScaleProgress:(float)a0 completion:(id /* block */)a1;
- (void)stateWithCompletion:(id /* block */)a0;
- (void)tapBannerWithCompletion:(id /* block */)a0;
- (void)triggerHandoffFeedbackAlertWithCompletion:(id /* block */)a0;
- (void)updateLockscreenMediaThresholdWithCompletion:(id /* block */)a0;

@end
