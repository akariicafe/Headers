@class NCDigestSummaryPlatterView, NCNotificationSummaryContentProvider, NSArray;

@interface NCNotificationDigestDetailedSummaryOrderProvider : NCNotificationDigestSummaryOrderProvider

@property (retain, nonatomic) NCDigestSummaryPlatterView *digestSummaryPlatterView;
@property (retain, nonatomic) NCNotificationSummaryContentProvider *communicationsSummaryContentProvider;
@property (retain, nonatomic) NCNotificationSummaryContentProvider *appsSummaryContentProvider;
@property (retain, nonatomic) NSArray *featuredNotificationContentProviders;

- (BOOL)adjustForContentSizeCategoryChange;
- (void)setDeviceAuthenticated:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateLeadingSummaryPlatterView;
- (void)_updateDigestSummaryPlatterView;
- (id)_atxHighlightedGroups;
- (BOOL)_presentFeaturedNotificationsInline;
- (BOOL)_shouldAllowTapOnLeadingSummaryPlatterView;
- (unsigned long long)_totalNotificationCountForSectionIdentifier:(id)a0;
- (void)_updateAppsSummaryContentProvidersWithRankedGroups:(id)a0;
- (void)_updateCommunicationsSummaryContentProvider;
- (void)_updateFeaturedNotificationContentProvidersWithHighlightedGroups:(id)a0;
- (id)leadingSummaryPlatterViewConfigureIfNecessary;

@end
