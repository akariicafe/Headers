@interface NewsUI2.FeatureAvailabilityProvider : NSObject <FCNewsAppConfigurationObserving> {
    void /* unknown type, empty encoding */ appConfiguration;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_interstellarEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appleMagazineContent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_narrativeAudio;
    void /* unknown type, empty encoding */ $__lazy_storage_$_useNewsArticleSearch;
    void /* unknown type, empty encoding */ $__lazy_storage_$_useFasterSearch;
    void /* unknown type, empty encoding */ $__lazy_storage_$_useContinueReading;
    void /* unknown type, empty encoding */ $__lazy_storage_$_allowInAppMessages;
    void /* unknown type, empty encoding */ $__lazy_storage_$_improvedBlockingBehavior;
    void /* unknown type, empty encoding */ $__lazy_storage_$_useNewChannelPicker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchFeaturedStoriesEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_allowSharingAlways;
    void /* unknown type, empty encoding */ $__lazy_storage_$_useNewReportConcern;
    void /* unknown type, empty encoding */ $__lazy_storage_$_useMoreToReadEOA;
    void /* unknown type, empty encoding */ $__lazy_storage_$_useMoreFromIssueEOA;
    void /* unknown type, empty encoding */ $__lazy_storage_$_useMultipleNativeAds;
    void /* unknown type, empty encoding */ $__lazy_storage_$_videoInFeed;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sportsNativeAdsEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_puzzlesEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_allowCIPBestOffer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_allowPaidBundleViaOffer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_allowSIWAOnMac;
    void /* unknown type, empty encoding */ $__lazy_storage_$_useFineGrainedNewsletterManagement;
    void /* unknown type, empty encoding */ $__lazy_storage_$_paidBundleViaOfferAllowPaywalls;
    void /* unknown type, empty encoding */ $__lazy_storage_$_paidBundleViaOfferAllowSubscriptionsDeeplink;
    void /* unknown type, empty encoding */ $__lazy_storage_$_paidBundleViaOfferAllowMastheadBanner;
    void /* unknown type, empty encoding */ $__lazy_storage_$_paidBundleViaOfferAllowIconBadge;
    void /* unknown type, empty encoding */ $__lazy_storage_$_paidBundleViaOfferAllowIconBadgeMercury;
    void /* unknown type, empty encoding */ $__lazy_storage_$_paidBundleViaOfferAllowLocalNotification;
    void /* unknown type, empty encoding */ $__lazy_storage_$_paidBundleViaOfferAllowUpsellEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_paidBundleViaOfferAllowAppLaunchUpsellEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shortcutsEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_articleLinkBehaviorImprovementsEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationImprovementsEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_articleViewerImprovementsEnabled;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sportsTopicNotificationsEnabled;
}

- (void)configurationManager:(id)a0 appConfigurationDidChange:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
