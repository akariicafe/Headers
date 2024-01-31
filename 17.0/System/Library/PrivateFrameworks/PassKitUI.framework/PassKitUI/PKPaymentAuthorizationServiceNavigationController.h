@class PKPaymentAuthorizationLayout, PKPaymentAuthorizationServiceViewController;
@protocol UIViewControllerTransitioningDelegate;

@interface PKPaymentAuthorizationServiceNavigationController : PKCompactNavigationContainedNavigationController {
    PKPaymentAuthorizationLayout *_layout;
}

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> paymentTransitioningDelegate;
@property (readonly, nonatomic) PKPaymentAuthorizationServiceViewController *authorizationViewController;

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(unsigned long long)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_backgroundColorForModalFormSheet;
- (id)initWithLayoutStyle:(long long)a0 paymentRequest:(id)a1 presenter:(id)a2;

@end
