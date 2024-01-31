@class NSString, NSArray, PKPaymentPassAction, PKPaymentWebService, NSDictionary, PKPerformActionPassView, PKPaymentPass, PKSelectActionView;
@protocol PKSelectActionViewControllerDelegate, PKPaymentDataProvider;

@interface PKSelectActionViewController : UIViewController <PKSelectActionViewDelegate, PKPerformActionViewControllerDelegate> {
    PKPerformActionPassView *_passView;
    PKPaymentPass *_pass;
    NSArray *_actions;
    unsigned long long _actionType;
    PKSelectActionView *_actionView;
    PKPaymentPassAction *_selectedAction;
    id<PKPaymentDataProvider> _paymentDataProvider;
    PKPaymentWebService *_webService;
    NSDictionary *_balances;
}

@property (weak, nonatomic) id<PKSelectActionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)a0;
- (void)_reloadActionView;
- (void)_rightBarButtonPressed:(id)a0;
- (id)initWithPass:(id)a0 actions:(id)a1 actionType:(unsigned long long)a2 paymentDataProvider:(id)a3 webService:(id)a4 balanceDictionary:(id)a5;
- (void)performActionViewControllerDidCancel:(id)a0;
- (void)performActionViewControllerDidPerformAction:(id)a0;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)selectActionViewDidSelectAction:(id)a0;
- (void)setRightBarButtonEnabled:(BOOL)a0;

@end
