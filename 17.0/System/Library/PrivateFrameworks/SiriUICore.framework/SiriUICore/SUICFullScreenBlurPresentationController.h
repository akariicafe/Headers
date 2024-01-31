@class _UIBackdropView;

@interface SUICFullScreenBlurPresentationController : UIPresentationController {
    _UIBackdropView *_fullScreenBlurView;
}

@property (nonatomic) unsigned long long blurStyle;

- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)presentationTransitionWillBegin;
- (void).cxx_destruct;
- (void)_stageViewsForFadeIn;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1 blurStyle:(unsigned long long)a2;

@end
