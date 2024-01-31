@class NSString, UIView;

@interface HUCameraStreamFullScreenDismissingAnimator : HUCameraStreamFullScreenAnimator <UIViewControllerAnimatedTransitioning>

@property (readonly, nonatomic) UIView *cameraViewSnapshot;
@property (readonly, nonatomic) UIView *cameraOverlaySnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
