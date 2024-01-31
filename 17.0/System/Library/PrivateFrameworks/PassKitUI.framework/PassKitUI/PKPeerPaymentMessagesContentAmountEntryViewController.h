@class PKPeerPaymentMessagesContentAmountEntryView, PKCurrencyAmount;
@protocol PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate;

@interface PKPeerPaymentMessagesContentAmountEntryViewController : PKPeerPaymentMessagesContentBaseViewController {
    BOOL _usesAccessibilityLayout;
}

@property (copy, nonatomic) PKCurrencyAmount *amount;
@property (nonatomic) unsigned long long sourceType;
@property (nonatomic) BOOL showSendAndRequest;
@property (nonatomic) BOOL showSetupRecurringSend;
@property (readonly, nonatomic) PKPeerPaymentMessagesContentAmountEntryView *mainView;
@property (weak, nonatomic) id<PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate> delegate;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_currentBalance;
- (BOOL)_isExpansionSupported;
- (BOOL)_isKeypadSupported;
- (id)_maximumTransferAmount;
- (id)_minimumTransferAmount;
- (void)_noteAmountChanged;
- (id)initWithMessagesAppController:(id)a0;
- (BOOL)pkui_navigationBarHidden;
- (struct { BOOL x0; long long x1; })pkui_navigationStatusBarStyleDescriptor;
- (void)reloadContent;
- (void)sendAnalyticsForAction:(unsigned long long)a0;

@end
