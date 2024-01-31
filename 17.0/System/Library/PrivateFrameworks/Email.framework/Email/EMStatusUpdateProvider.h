@class NSDateFormatter;

@interface EMStatusUpdateProvider : NSObject {
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_weekdayFormatter;
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
- (id)_statusUpdatedAtTimeWithDate:(id)a0;
- (id)_statusUpdatedMinutesAgoWithDate:(id)a0 now:(id)a1;
- (id)_statusUpdatedOnDateWithDate:(id)a0;
- (id)_statusUpdatedOnDayWithDate:(id)a0;
- (id)statusUpdateStringWithDate:(id)a0 now:(id)a1 nextTransition:(id *)a2;
- (unsigned long long)statusUpdateWithDate:(id)a0 now:(id)a1 nextTransition:(id *)a2;

@end
