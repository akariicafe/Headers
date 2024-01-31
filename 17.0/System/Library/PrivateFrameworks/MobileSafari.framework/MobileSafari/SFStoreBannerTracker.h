@interface SFStoreBannerTracker : WBSBannerTracker

+ (id)sharedTracker;

- (id)categoryName;
- (long long)basis;
- (void)blockProductBanner:(id)a0;
- (void)isProductBannerBlocked:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldBlockForIdentifier:(id)a0 withDismissCount:(unsigned long long)a1;

@end
