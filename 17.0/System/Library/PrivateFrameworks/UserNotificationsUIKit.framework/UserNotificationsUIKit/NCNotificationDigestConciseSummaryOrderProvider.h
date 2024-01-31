@class NCNotificationSummaryContentProvider, NCNotificationSummaryPlatterView;

@interface NCNotificationDigestConciseSummaryOrderProvider : NCNotificationDigestSummaryOrderProvider

@property (retain, nonatomic) NCNotificationSummaryPlatterView *summaryPlatterView;
@property (retain, nonatomic) NCNotificationSummaryContentProvider *summaryContentProvider;

- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)updateLeadingSummaryPlatterView;
- (void)_updateSummaryContentProvider;
- (void)_updateSummaryPlatterView;
- (id)leadingSummaryPlatterViewConfigureIfNecessary;

@end
