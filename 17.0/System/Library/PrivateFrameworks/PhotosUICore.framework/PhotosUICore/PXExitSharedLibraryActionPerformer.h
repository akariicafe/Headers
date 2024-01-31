@class NSString;
@protocol PXSharedLibrary;

@interface PXExitSharedLibraryActionPerformer : PXActionPerformer <PXSharedLibraryExitAssistantViewControllerDelegate>

@property (retain, nonatomic) id<PXSharedLibrary> sharedLibraryOrPreview;
@property (nonatomic) BOOL shouldConfirmExit;
@property (nonatomic) long long exitRetentionPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)_beginExitWithExitAssistantViewController:(id)a0 dismissalHandler:(id /* block */)a1;
- (void)_handlePresentationErrorWithDismissalHandler:(id /* block */)a0;
- (void)_performExitWithExitAssistantViewController:(id)a0 dismissalHandler:(id /* block */)a1;
- (void)_presentFailureAlertForSharedLibraryOrPreview:(id)a0 error:(id)a1 dismissalHandler:(id /* block */)a2;
- (void)cancelExitAssistantViewController:(id)a0;
- (void)completeExitAssistantViewController:(id)a0 withExitRetentionPolicy:(long long)a1;
- (void)performActionWithSharedLibraryOrPreview:(id)a0 shouldConfirmExit:(BOOL)a1 exitRetentionPolicy:(long long)a2 presentationEnvironment:(id)a3 completionHandler:(id /* block */)a4;

@end
