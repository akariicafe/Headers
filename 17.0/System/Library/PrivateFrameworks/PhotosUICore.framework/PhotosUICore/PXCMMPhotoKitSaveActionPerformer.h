@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitSaveActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (readonly, nonatomic) PXCMMPhotoKitSession *session;

- (void)performUserInteractionTask;
- (BOOL)isCancellable;
- (id)createActionProgress;

@end
