@class NSString, SBLockScreenTemperatureWarningView;

@interface SBLockScreenTemperatureWarningViewController : SBLockOverlayViewController {
    SBLockScreenTemperatureWarningView *_warningView;
}

@property (readonly, weak, nonatomic) NSString *slideToUnlockText;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;

@end
