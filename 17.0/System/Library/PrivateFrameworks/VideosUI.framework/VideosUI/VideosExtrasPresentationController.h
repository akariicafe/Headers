@class UIView;

@interface VideosExtrasPresentationController : UIPresentationController

@property (retain, nonatomic) UIView *extrasMenuBarView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } extrasMenuBarFrame;

- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 extrasMenuBarView:(id)a2 extrasmenuBarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
