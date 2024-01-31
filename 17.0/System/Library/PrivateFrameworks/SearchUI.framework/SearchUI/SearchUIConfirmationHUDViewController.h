@class NSString, SearchUIConfirmationHUDView;

@interface SearchUIConfirmationHUDViewController : UIViewController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) SearchUIConfirmationHUDView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)init;
- (id)view;
- (long long)preferredUserInterfaceStyle;
- (BOOL)_canShowWhileLocked;
- (void)viewDidAppear:(BOOL)a0;
- (void)setTitle:(id)a0;

@end
