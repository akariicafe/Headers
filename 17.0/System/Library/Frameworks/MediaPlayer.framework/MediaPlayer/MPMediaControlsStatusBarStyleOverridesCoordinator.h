@class NSString, SBSStatusBarStyleOverridesCoordinator, SBSStatusBarStyleOverridesAssertion, MPMediaControls;

@interface MPMediaControlsStatusBarStyleOverridesCoordinator : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate> {
    SBSStatusBarStyleOverridesAssertion *_statusBarStyleOverride;
    SBSStatusBarStyleOverridesCoordinator *_coordinator;
    MPMediaControls *_mediaControls;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)statusBarCoordinator:(id)a0 invalidatedRegistrationWithError:(id)a1;
- (BOOL)statusBarCoordinator:(id)a0 receivedTapWithContext:(id)a1 completionBlock:(id /* block */)a2;
- (void)presentMediaControls;
- (void)presentMediaControlsWithCompletion:(id /* block */)a0;

@end
