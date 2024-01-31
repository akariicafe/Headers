@class UINavigationController, NSString, PXCMMGridController, PXCMMSession, PXCMMViewController, UIViewController;
@protocol PXMemoryAssetsActionFactory, PXCMMWorkflowCoordinatorDelegate;

@interface PXCMMWorkflowCoordinator : NSObject <PXCMMViewControllerDelegate, PXAssetCollectionActionPerformerDelegate, PXCMMActionPerformerDelegate, PXCMMActionControllerDelegate, PXCMMWorkflowPresenting> {
    UINavigationController *_navigationController;
    PXCMMGridController *_gridController;
    UIViewController *_rootWorkflowViewController;
    PXCMMSession *_rootWorkflowSession;
    PXCMMViewController *_sendBackWorkflowViewController;
}

@property (weak, nonatomic) id<PXCMMWorkflowCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;

- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (id)undoManagerForActionPerformer:(id)a0;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)presentationEnvironmentForActionPerformer:(id)a0;
- (void)cancelWorkflow;
- (id)_presentationEnvironment;
- (id)workflowViewControllerWithContext:(id)a0 embedInNavigationControllerOfClass:(Class)a1 photosViewConfigurationBlock:(id /* block */)a2;
- (id)workflowViewControllerWithSession:(id)a0 embedInNavigationControllerOfClass:(Class)a1 assetActionManager:(id)a2 assetCollectionActionManager:(id)a3 photosViewConfigurationBlock:(id /* block */)a4;
- (id)_performDeleteActionForSession:(id)a0;
- (id)completeMyMomentViewController:(id)a0 performSendBackActionForSession:(id)a1;
- (void)_completeActionForSession:(id)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)_completeMessageComposeActionForSession:(id)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)_completePhotosPickerActionForSession:(id)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)_completePublishForSession:(id)a0 withURL:(id)a1 error:(id)a2;
- (void)_completeSendBackActionForSession:(id)a0 withContext:(id)a1 error:(id)a2;
- (id)_createRootWorkflowViewControllerWithSession:(id)a0 willBeEmbeddedInNavigationController:(BOOL)a1 assetActionManager:(id)a2 assetCollectionActionManager:(id)a3 photosViewConfigurationBlock:(id /* block */)a4;
- (id)_createSendBackWorkflowViewControllerWithContext:(id)a0;
- (void)_didFinishSession:(id)a0 withState:(unsigned long long)a1;
- (void)_didFinishSession:(id)a0 withState:(unsigned long long)a1 avoidDismissal:(BOOL)a2;
- (id)_performActionWithType:(id)a0 forSession:(id)a1;
- (void)_performCleanupActionForSession:(id)a0;
- (void)_performMessageComposeActionForSession:(id)a0 shareURL:(id)a1;
- (void)_performNotifyIfNeededActionForSession:(id)a0;
- (void)_performPhotosPickerActionForSession:(id)a0 gridPresentation:(id)a1;
- (id)_performPublishActionForSession:(id)a0;
- (id)_performReceiveActionForSession:(id)a0;
- (void)_performSendBackActionForSession:(id)a0;
- (void)_presentFailureForSession:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)_presentSendBackFlowWithContext:(id)a0;
- (id)_presentingViewControllerForViewController:(id)a0;
- (void)_session:(id)a0 finishedAccepting:(BOOL)a1 withError:(id)a2;
- (id)completeMyMomentViewController:(id)a0 performActionForSession:(id)a1;
- (void)completeMyMomentViewController:(id)a0 showPhotoPickerForSession:(id)a1;
- (void)didCancelCompleteMyMomentViewController:(id)a0;
- (void)performQuickSaveForContext:(id)a0 completion:(id /* block */)a1;
- (void)startPreloadingTasksForCompleteMyMomentViewController:(id)a0;
- (id)workflowViewControllerWithContext:(id)a0;
- (id)workflowViewControllerWithContext:(id)a0 embedInNavigationControllerOfClass:(Class)a1;

@end
