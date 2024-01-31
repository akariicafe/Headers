@interface NCNotificationAppsSummaryContentProvider : NCNotificationSummaryContentProvider

- (BOOL)isIconViewLeading;
- (id)summaryTitle;
- (id)_summaryIconViewForNotificationRequest:(id)a0;
- (id)_summaryStringForNotificationRequest:(id)a0;
- (BOOL)hideSummaryIconViews;
- (unsigned long long)maxNumberOfSummaryItems;

@end
