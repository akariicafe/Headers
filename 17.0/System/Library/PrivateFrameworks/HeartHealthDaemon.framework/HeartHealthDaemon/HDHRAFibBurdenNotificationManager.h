@class HKCalendarCache, HKAnalyticsEventSubmissionManager, HDProfile, NSObject, HDHRAFibBurdenNotificationModeDeterminer;
@protocol HDHRAFibBurdenNotificationManagerNotificationLastSentDateStore, OS_dispatch_queue;

@interface HDHRAFibBurdenNotificationManager : NSObject <HDHRAFibBurdenNotificationManaging, HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate> {
    HDProfile *_profile;
    id /* block */ _dateGenerator;
    HKCalendarCache *_calendarCache;
    HDHRAFibBurdenNotificationModeDeterminer *_modeDeterminer;
    id<HDHRAFibBurdenNotificationManagerNotificationLastSentDateStore> _notificationLastSentDateStore;
    HKAnalyticsEventSubmissionManager *_eventSubmissionManager;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_generateDateRangeStringForAnalysisSampleWithStartDate:(id)a0 endDate:(id)a1 calendar:(id)a2;
+ (id)_buildNotificationBodyForCurrentPercentageString:(id)a0 isCurrentValueClamped:(BOOL)a1 previousPercentageString:(id)a2 isPreviousValueClamped:(BOOL)a3;
+ (id)_notificationBodyKeyForCurrentPercentageString:(id)a0 isCurrentValueClamped:(BOOL)a1 previousPercentageString:(id)a2 isPreviousValueClamped:(BOOL)a3;
+ (id)_buildNotificationForAFibBurdenCurrentPercentage:(id)a0 isCurrentValueClamped:(BOOL)a1 previousPercentage:(id)a2 isPreviousValueClamped:(BOOL)a3 startDate:(id)a4 endDate:(id)a5 currentDate:(id)a6 expirationDate:(id)a7 uuid:(id)a8 calendar:(id)a9;
+ (id)_buildNotificationForLackOfAFibBurdenWithCurrentDate:(id)a0 expirationDate:(id)a1 shouldForwardToWatch:(BOOL)a2 uuid:(id)a3;
+ (id)_julianDayFromDate:(id)a0 calendar:(id)a1;

- (id)_generateExpirationDateWithCurrentDate:(id)a0;
- (id)initWithProfile:(id)a0;
- (id)_userNotificationCenter;
- (void)_sendNotificationWithMode:(id)a0 completion:(id /* block */)a1;
- (id)initWithProfile:(id)a0 modeDeterminer:(id)a1 notificationLastSentDateStore:(id)a2 calendarCache:(id)a3 dateGenerator:(id /* block */)a4 eventSubmissionManager:(id)a5;
- (void).cxx_destruct;
- (void)sevenDayAnalysisScheduler:(id)a0 didSuccessfullyCompleteAnalysisWithSample:(id)a1 onboardedWithinAnalysisInterval:(BOOL)a2 featureStatus:(id)a3;
- (void)_sendNotificationRequest:(id)a0 completion:(id /* block */)a1;
- (id)_buildValueNotificationForMode:(id)a0 currentDate:(id)a1;
- (id)_buildNotificationForMode:(id)a0;

@end
