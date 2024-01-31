@class NSString, UIView;

@interface MKLookAroundTransitionController : NSObject <UIViewControllerTransitioningDelegate>

@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void).cxx_destruct;
- (void)_dismiss:(id)a0 fromViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)_present:(id)a0 fromViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)beginFullScreenDismissalOfViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)beginFullScreenPresentationOfViewController:(id)a0 fromView:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;

@end
