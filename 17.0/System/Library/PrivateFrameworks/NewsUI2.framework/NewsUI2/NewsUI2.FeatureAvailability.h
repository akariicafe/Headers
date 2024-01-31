@class _TtC16NewsSubscription26PaidBundleViaOfferSettings;

@interface NewsUI2.FeatureAvailability : _TtCs12_SwiftObject <TSFeatureAvailabilityType> {
    void /* unknown type, empty encoding */ featureAvailabilityProvider;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isContentStoreFrontSupported;
}

@property (nonatomic, readonly) BOOL useNewReportConcern;
@property (nonatomic, readonly) BOOL useMoreToReadEOA;
@property (nonatomic, readonly) BOOL useMoreFromIssueEOA;
@property (nonatomic, readonly) BOOL useMultipleNativeAds;
@property (nonatomic, readonly) BOOL sportsTopicNotificationsEnabled;
@property (nonatomic, readonly) BOOL interstellarEnabled;
@property (nonatomic, readonly) BOOL appleMagazineContent;
@property (nonatomic, readonly) BOOL allowSharingAlways;
@property (nonatomic, readonly) BOOL useNewsArticleSearch;
@property (nonatomic, readonly) BOOL searchFeaturedStoriesEnabled;
@property (nonatomic, readonly) BOOL useFasterSearch;
@property (nonatomic, readonly) BOOL useNewChannelPicker;
@property (nonatomic, readonly) BOOL allowInAppMessages;
@property (nonatomic, readonly) BOOL narrativeAudio;
@property (nonatomic, readonly) BOOL useContinueReading;
@property (nonatomic, readonly) BOOL puzzlesEnabled;
@property (nonatomic, readonly) BOOL sportsNativeAdsEnabled;
@property (nonatomic, readonly) BOOL shortcutsEnabled;
@property (nonatomic, readonly) BOOL allowCIPBestOffer;
@property (nonatomic, readonly) BOOL allowPaidBundleViaOffer;
@property (nonatomic, readonly) BOOL allowSIWAOnMac;
@property (nonatomic, readonly) BOOL useFineGrainedNewsletterManagement;
@property (nonatomic, readonly) BOOL improvedBlockingBehaviorEnabled;
@property (nonatomic, readonly) _TtC16NewsSubscription26PaidBundleViaOfferSettings *paidBundleViaOfferAvailability;
@property (nonatomic, readonly) BOOL articleLinkBehaviorImprovementsEnabled;

- (void)addWithObserver:(id)a0;
- (void)removeWithObserver:(id)a0;

@end
