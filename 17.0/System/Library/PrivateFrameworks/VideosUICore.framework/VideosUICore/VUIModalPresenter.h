@class NSArray, _UIProgressiveBlurPresentationAnimator, NSHashTable;

@interface VUIModalPresenter : NSObject {
    NSHashTable *__presentationControllers;
    _UIProgressiveBlurPresentationAnimator *_presentingAnimator;
    _UIProgressiveBlurPresentationAnimator *_dismissingAnimator;
}

@property (readonly, copy, nonatomic) NSArray *presentedViewControllers;

+ (id)sharedInstance;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)dismissViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_presentationControllers;
- (void)presentViewController:(id)a0 fromViewController:(id)a1 options:(id)a2 completion:(id /* block */)a3;

@end
