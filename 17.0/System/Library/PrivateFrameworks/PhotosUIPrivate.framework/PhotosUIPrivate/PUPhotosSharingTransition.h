@class PUPhotosSharingTransitionContext, UICollectionViewLayout, UIViewController;
@protocol PUPhotosSharingTransitionDelegate, PUPhotosSharingTransitionViewController;

@interface PUPhotosSharingTransition : PUModalTransition

@property (retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout;
@property (retain, nonatomic) UIViewController<PUPhotosSharingTransitionViewController> *sharingTransitionViewController;
@property (retain, nonatomic) PUPhotosSharingTransitionContext *photosSharingTransitionContext;
@property (weak, nonatomic) id<PUPhotosSharingTransitionDelegate> delegate;

- (void).cxx_destruct;
- (void)animateDismissTransition;
- (void)animatePresentTransition;

@end
