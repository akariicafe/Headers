@class CSMagSafeAccessoryTrayView;

@interface CSMagSafeAccessoryTrayViewController : CSMagSafeAccessoryViewController

@property (retain, nonatomic) CSMagSafeAccessoryTrayView *trayView;
@property (nonatomic) BOOL isAnimatingPresentation;

- (void)viewDidLoad;
- (id)accessoryView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithAccessory:(id)a0;
- (id)_trayColorForAccessory:(id)a0;
- (double)animationDurationBeforeDismissal;

@end
