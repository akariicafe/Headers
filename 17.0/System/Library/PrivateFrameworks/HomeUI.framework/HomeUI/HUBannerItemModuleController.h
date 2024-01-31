@class AMSUIUpdateMultiUserTokenTask, NAFuture, UINavigationController, HUGridLayoutOptions, NSString;
@protocol HUBannerItemModuleControllerDelegate;

@interface HUBannerItemModuleController : HUItemModuleController <HUBannerViewDelegate, HFUserObserver, PRXFlowDelegate>

@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (retain, nonatomic) NAFuture *homeMediaAccountFuture;
@property (retain, nonatomic) AMSUIUpdateMultiUserTokenTask *multiUserTokenFixTask;
@property (retain, nonatomic) UINavigationController *proxCardNavigationController;
@property (weak, nonatomic) id<HUBannerItemModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (unsigned long long)didSelectItem:(id)a0;
- (void)user:(id)a0 didUpdateNeedsiTunesMultiUserRepair:(BOOL)a1;
- (void)bannerView:(id)a0 dismissButtonTapped:(id)a1;
- (id)_defaultCellLayoutOptionsForViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)_sendBannerInteractionforItem:(id)a0 tappedBannerItemOverrideClassName:(id)a1;
- (Class)collectionCellClassForItem:(id)a0;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)a0 layoutEnvironment:(id)a1;
- (void)dismissCameraUpgradeBanner;
- (void)fetchMediaAccountForHome:(id)a0;
- (BOOL)hasTapActionForItem:(id)a0;
- (id)initWithModule:(id)a0 host:(id)a1 delegate:(id)a2;
- (void)upgradeCameraSelected;

@end
