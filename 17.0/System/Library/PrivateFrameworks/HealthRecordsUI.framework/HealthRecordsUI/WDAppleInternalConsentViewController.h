@class UIViewController, UIBarButtonItem;

@interface WDAppleInternalConsentViewController : HKTitledBuddyViewController {
    UIBarButtonItem *_navigationCancelButton;
}

@property (retain, nonatomic) UIViewController *actionViewController;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)titleString;
- (void)cancelButtonTapped:(id)a0;
- (id)bodyString;
- (long long)bodyTextAlignment;
- (void)declineButtonTapped:(id)a0;
- (void)acceptButtonTapped:(id)a0;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)a0;
- (id)initWithPresentingViewController:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)shouldCustomizeNavigationBar;
- (void)updateBodyTextAttributesWithMutableString:(id)a0;

@end
