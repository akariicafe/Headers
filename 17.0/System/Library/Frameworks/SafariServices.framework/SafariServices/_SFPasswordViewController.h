@class NSString, _UIAsyncInvocation;
@protocol _SFPasswordViewControllerDelegate;

@interface _SFPasswordViewController : UIViewController <SFPasswordRemoteViewControllerDelegate, SFQueueingServiceViewControllerProxyDelegate> {
    _UIAsyncInvocation *_cancelViewServiceRequest;
}

@property (weak, nonatomic) id<_SFPasswordViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_connectToService;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)_remoteViewController;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)_addRemoteView;
- (void)_addRemoteViewAsChild;
- (id)_connectToServiceWithCompletion:(id /* block */)a0;
- (void)_dismissPasswordViewController;
- (void)_setUpServiceProxyIfNeeded;
- (void)remoteViewController:(id)a0 viewServiceDidTerminateWithError:(id)a1;
- (void)remoteViewControllerWillDismiss:(id)a0;
- (void)serviceProxyWillQueueInvocation:(id)a0;

@end
