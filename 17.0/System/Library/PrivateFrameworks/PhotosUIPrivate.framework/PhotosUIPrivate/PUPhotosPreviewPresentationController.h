@protocol PUPhotosPreviewPresentationControllerDelegate;

@interface PUPhotosPreviewPresentationController : _UIPreviewPresentationController

@property (weak, nonatomic) id<PUPhotosPreviewPresentationControllerDelegate> photosPreviewingDelegate;

- (void).cxx_destruct;
- (void)_revealTransitionDidComplete:(BOOL)a0;

@end
