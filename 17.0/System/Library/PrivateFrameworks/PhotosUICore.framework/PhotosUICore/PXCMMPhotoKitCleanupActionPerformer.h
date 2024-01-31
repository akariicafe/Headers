@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitCleanupActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (readonly, nonatomic) PXCMMPhotoKitSession *session;

- (void)_activateSuggestion:(id)a0 completionHandler:(id /* block */)a1;
- (void)performBackgroundTask;

@end
