@class NSString, HDProfile, FCCDateProvider, NSDate, NSObject, FITypicalDayActivityModel;
@protocol OS_dispatch_queue;

@interface FCTypicalDayProvider : NSObject <FITypicalDayActivityModelDelegate, HDCurrentActivitySummaryHelperObserver, HDProfileReadyObserver> {
    FCCDateProvider *_dateProvider;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    int _significantTimeChangeToken;
    NSDate *_lastRebuildDate;
}

@property (readonly, nonatomic) FITypicalDayActivityModel *typicalDayModel;
@property (retain, nonatomic) NSDate *userStartOfDay;
@property (retain, nonatomic) NSDate *userEndOfDay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void)dealloc;
- (void)_onqueue_rebuildTypicalDayModelForced:(BOOL)a0;
- (id)clientProvidedUserEndOfDay;
- (void)_significantTimeChangeOccurred:(id)a0;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateYesterdayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateTodayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (void)_onqueue_handleUpdatedActivitySummary:(id)a0;
- (void)_onqueue_registerForSignificantTimeChanges;
- (id)initWithDateProvider:(id)a0 profile:(id)a1 serviceQueue:(id)a2;
- (id)clientProvidedUserStartOfDay;
- (id)_typicalDayIntervalFromToday;
- (id)currentCalendar;
- (void).cxx_destruct;
- (id)currentDate;
- (BOOL)enumerateActivitySummariesFromDateComponents:(id)a0 toDateComponents:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (id)firstOnWristDateToday;

@end
