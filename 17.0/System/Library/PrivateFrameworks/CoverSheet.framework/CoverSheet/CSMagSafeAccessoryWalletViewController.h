@class CSMagSafeAccessoryWalletView;

@interface CSMagSafeAccessoryWalletViewController : CSMagSafeAccessoryViewController

@property (retain, nonatomic) CSMagSafeAccessoryWalletView *walletView;
@property (nonatomic) BOOL isAnimatingPresentation;

- (void)viewDidLoad;
- (id)accessoryView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithAccessory:(id)a0;
- (double)animationDurationBeforeDismissal;

@end
