@class SFPinnableBanner, NSArray;
@protocol BannerControllerDelegate;

@interface BannerController : NSObject

@property (weak, nonatomic) id<BannerControllerDelegate> delegate;
@property (readonly, nonatomic) SFPinnableBanner *appBanner;
@property (readonly, nonatomic) SFPinnableBanner *crashBanner;
@property (readonly, nonatomic) SFPinnableBanner *webExtensionBanner;
@property (readonly, nonatomic) SFPinnableBanner *remotelyEnabledExtensionBanner;
@property (readonly, nonatomic) SFPinnableBanner *webExtensionPermissionGrantedBanner;
@property (readonly, nonatomic) SFPinnableBanner *privateBrowsingPrivacyProtectionsBanner;
@property (readonly, nonatomic) SFPinnableBanner *tabGroupBanner;
@property (readonly, nonatomic) NSArray *topBanners;
@property (readonly, nonatomic) NSArray *topBannersAnchoredToStatusBar;
@property (readonly, nonatomic) NSArray *topBannersSeparableFromStatusBar;
@property (readonly, nonatomic) unsigned long long indexOfFirstBannerSeparableFromStatusBar;

- (void).cxx_destruct;
- (void)setWebExtensionBanner:(id)a0 animated:(BOOL)a1;
- (void)_updateTopBanners;
- (void)setAppBanner:(id)a0 animated:(BOOL)a1;
- (void)setCrashBanner:(id)a0 animated:(BOOL)a1;
- (void)setPrivateBrowsingPrivacyProtectionsBanner:(id)a0 animated:(BOOL)a1;
- (void)setRemotelyEnabledExtensionBanner:(id)a0 animated:(BOOL)a1;
- (void)setTabGroupBanner:(id)a0 animated:(BOOL)a1;
- (void)setWebExtensionPermissionGrantedBanner:(id)a0 animated:(BOOL)a1;

@end
