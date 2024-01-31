@class NSString, NSMutableArray, PRUIExternallyHostedPosterEditingServer;

@interface SBPosterBoardModalEditingManager : NSObject <PRUIExternallyHostedPosterEditingServerDelegate, SBPosterEditingTransientOverlayViewControllerDelegate> {
    PRUIExternallyHostedPosterEditingServer *_posterEditingServer;
    NSMutableArray *_presentedTransientOverlayControllers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)beginExternalPosterEditingSessionWithEditingRequest:(id)a0 completion:(id /* block */)a1;
- (void)sendRequestDismissalActionWithEditingRequest:(id)a0;
- (void)_dismissTransientOverlayViewControllerIfPresenting:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_presentTransientOverlayViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)posterEditingTransientOverlayViewController:(id)a0 didDismissWithResponse:(id)a1;
- (void)posterEditingTransientOverlayViewController:(id)a0 willDismissWithResponse:(id)a1;

@end
