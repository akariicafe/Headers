@class NSString, UIView;
@protocol MUPhotoGalleryTransitionAnimator;

@interface MUPhotoGalleryTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIView *transitionView;
@property (weak, nonatomic) id<MUPhotoGalleryTransitionAnimator> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
