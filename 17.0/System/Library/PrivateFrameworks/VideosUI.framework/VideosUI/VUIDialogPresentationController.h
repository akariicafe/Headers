@class UIVisualEffectView;

@interface VUIDialogPresentationController : UIPresentationController {
    UIVisualEffectView *_backdropView;
}

@property (readonly, nonatomic) UIVisualEffectView *backdropView;
@property (nonatomic) struct CGSize { double width; double height; } modalSize;
@property (copy, nonatomic) id /* block */ completedAnimationBlock;

- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)dismissalTransitionWillBegin;
- (void)dealloc;
- (void)_tapGesture:(id)a0;
- (long long)presentationStyle;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (void)_layoutPresentedView;

@end
