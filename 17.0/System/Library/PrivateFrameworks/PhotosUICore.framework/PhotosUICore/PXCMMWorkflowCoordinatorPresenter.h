@class NSString, PXGadgetNavigationHelper, PXCMMWorkflowCoordinator;

@interface PXCMMWorkflowCoordinatorPresenter : NSObject <PXCMMWorkflowCoordinatorDelegate, PXCMMWorkflowPresenting> {
    PXGadgetNavigationHelper *_navigationHelper;
    PXCMMWorkflowCoordinator *_workflowCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)workflowCoordinator:(id)a0 workflowViewController:(id)a1 didFinishSession:(id)a2 withActivityState:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)cancelWorkflow;
- (id)initWithNavigationHelper:(id)a0;
- (long long)shareOriginForSession:(id)a0 workflowCoordinator:(id)a1;
- (id)workflowViewControllerWithContext:(id)a0;

@end
