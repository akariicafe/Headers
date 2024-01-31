@class SSSpinner, NSString;

@interface SSOBBoldTrayButton : OBBoldTrayButton

@property (retain, nonatomic) SSSpinner *spinner;
@property (retain) NSString *normalStateTitle;

+ (id)boldButton;

- (void).cxx_destruct;
- (void)showsBusyIndicator;
- (void)hidesBusyIndicator;
- (void)_showLoading;
- (void)updateBusyText:(id)a0;
- (void)_centerActivityIndicatorInButton;
- (void)_hideLoading;
- (void)_showSpinning;

@end
