@interface PXSharedLibraryCameraSharingBannerStatusProvider : PXObservable <PXPreferencesObserver>

@property (nonatomic) BOOL shouldShowBanner;

- (void)preferencesDidChange;
- (id)init;
- (void)_updateShouldShowBanner;
- (void)_significantTimeChange:(id)a0;

@end
