@class ADTrackingTransparency, UserTransparencyViewController, NSString;

@interface PUIAdSupportController : PSListController <UserTransparencyViewControllerDelegate>

@property (retain, nonatomic) UserTransparencyViewController *userTransparencyController;
@property (retain, nonatomic) ADTrackingTransparency *adTrackingTransparency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)personalizedAdsSwitchEnabled;
- (BOOL)personalizedAdsAvailable;
- (BOOL)personalizedAdsConsented;
- (id)personalizedAdsEnabled:(id)a0;
- (void)setPersonalizedAdsEnabled:(id)a0 specifier:(id)a1;
- (void)userDidTapAdPreferences:(id)a0;
- (void)userDidTapDoneButton:(id)a0;
- (void)userDidTapLearnMoreLink:(id)a0;
- (void)userTransparencyViewController:(id)a0 didFailWithError:(id)a1;
- (void)userTransparencyViewControllerDidDismiss:(id)a0;
- (void)userTransparencyViewControllerDidLoad:(id)a0;

@end
