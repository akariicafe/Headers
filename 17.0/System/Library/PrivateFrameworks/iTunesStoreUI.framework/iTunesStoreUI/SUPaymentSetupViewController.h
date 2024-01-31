@class PKPaymentSetupViewController, PKPaymentSetupRequest;
@protocol SUPaymentSetupViewControllerDelegate;

@interface SUPaymentSetupViewController : UIViewController

@property (retain, nonatomic) PKPaymentSetupViewController *childViewController;
@property (weak, nonatomic) id<SUPaymentSetupViewControllerDelegate> delegate;
@property (readonly, nonatomic) PKPaymentSetupRequest *paymentSetupRequest;

- (void)_setup;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithPaymentSetupRequest:(id)a0;

@end
