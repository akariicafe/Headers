@class PUOneUpPhotosSharingTransitionContext, UICollectionViewLayout, NSString, UIViewController;
@protocol PUOneUpPhotosSharingTransitionDelegate, PUOneUpPhotosSharingTransitionViewController, PUOneUpAssetTransitionViewController;

@interface PUOneUpPhotosSharingTransition : PUModalTransition <PUOneUpAssetTransition>

@property (retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout;
@property (weak, nonatomic) UIViewController<PUOneUpPhotosSharingTransitionViewController, PUOneUpAssetTransitionViewController> *sharingTransitionViewController;
@property (weak, nonatomic) UIViewController<PUOneUpAssetTransitionViewController> *presentingViewController;
@property (retain, nonatomic) PUOneUpPhotosSharingTransitionContext *oneUpPhotosSharingTransitionContext;
@property (weak, nonatomic) id<PUOneUpPhotosSharingTransitionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)animateDismissTransition;
- (void)animatePresentTransition;

@end
