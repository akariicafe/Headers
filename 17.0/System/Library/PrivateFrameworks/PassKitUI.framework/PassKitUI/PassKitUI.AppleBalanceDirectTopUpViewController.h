@interface PassKitUI.AppleBalanceDirectTopUpViewController : UIViewController <AMSUIWebDelegate> {
    void /* unknown type, empty encoding */ hostingVC;
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ uiManager;
    void /* unknown type, empty encoding */ dtuModel;
    void /* unknown type, empty encoding */ setupController;
    void /* unknown type, empty encoding */ addItem;
    void /* unknown type, empty encoding */ amount;
}

- (void)viewWillLayoutSubviews;
- (void)dismissAction;
- (void)loadView;
- (void)webViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)addAction;

@end
