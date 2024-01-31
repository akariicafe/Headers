@class HDSQLitePredicate, HDProfile, NSCalendar, HKStateOfMind;

@interface HDMHDaySummaryEnumerator : NSObject {
    HDProfile *_profile;
    struct { long long start; long long duration; } _dayIndexRange;
    HDSQLitePredicate *_predicate;
    NSCalendar *_gregorianCalendar;
    HKStateOfMind *_pendingDailyStateOfMind;
    BOOL _ascending;
}

- (BOOL)enumerateWithError:(id *)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_queryPredicate;
- (long long)_compareDayIndex:(long long)a0 withDayIndex:(long long)a1;
- (BOOL)_finishCurrentSummaryBuilder:(id)a0 pendingDailyStateOfMind:(id)a1 pendingDailyStateOfMindDayIndex:(long long)a2 clientRequestedStop:(BOOL *)a3 handler:(id /* block */)a4;
- (id)_makeStateOfMindSampleEnumerator;
- (id)initWithProfile:(id)a0 dayIndexRange:(struct { long long x0; long long x1; })a1 gregorianCalendar:(id)a2 predicate:(id)a3 pendingDailyStateOfMind:(id)a4 ascending:(BOOL)a5;

@end
