@class UIView;
@protocol UIViewControllerContextTransitioning;

@interface SBBannerCustomTransitionAnimatorContext : NSObject

@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic, getter=isPresentationTransition) BOOL presentationTransition;
@property (readonly, nonatomic) UIView *transitionView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } initialFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } initialContentFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } finalFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } finalContentFrame;

- (void).cxx_destruct;
- (id)targetViewController;

@end
