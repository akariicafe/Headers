@interface EKUIAppReviewUtils : NSObject

+ (id)_queue;
+ (void)applicationDidForeground;
+ (id)_sharedStoreReview;
+ (BOOL)_shouldDisplayReviewPromptWithCalendarModel:(id)a0;
+ (BOOL)_upcomingEventCountMeetsThresholdInCalendarModel:(id)a0;
+ (void)displayReviewPromptIfNeededInScene:(id)a0 calendarModel:(id)a1;

@end
