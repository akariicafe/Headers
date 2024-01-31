@protocol PXStoryViewActionPerformer;

@interface PXStoryAssetActionPerformer : PXPhotoKitAssetActionPerformer

@property (readonly, weak, nonatomic) id<PXStoryViewActionPerformer> storyViewActionPerformer;

+ (BOOL)canPerformWithActionManager:(id)a0;

- (void).cxx_destruct;

@end
