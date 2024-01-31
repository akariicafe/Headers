@class NSString, HUBannerView, HUGridLayoutOptions;
@protocol HUSafetyAndSecuritySettingsModuleControllerDelegate;

@interface HUSafetyAndSecuritySettingsItemModuleController : HUItemModuleController <HUUserSwitchCellDelegate, HUBannerViewDelegate, HFHomeManagerObserver>

@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (retain, nonatomic) HUBannerView *softwareUpdateBannerView;
@property (weak, nonatomic) id<HUSafetyAndSecuritySettingsModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)didSelectItem:(id)a0;
- (void)homeManager:(id)a0 didUpdateHH2State:(BOOL)a1;
- (void)bannerView:(id)a0 footerViewTapped:(id)a1;
- (Class)cellClassForItem:(id)a0;
- (id)initWithModule:(id)a0 delegate:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (void)userSwitchCell:(id)a0 didTurnOn:(BOOL)a1;

@end
