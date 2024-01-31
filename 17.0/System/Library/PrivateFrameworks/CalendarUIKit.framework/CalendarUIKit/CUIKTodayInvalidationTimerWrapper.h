@class NSTimer;

@interface CUIKTodayInvalidationTimerWrapper : NSObject {
    NSTimer *_tzSupportDayRolloverTimer;
}

- (void)dealloc;
- (id)initWithCalendar:(id)a0;
- (void).cxx_destruct;
- (void)_killTimeZoneTimer;
- (void)_setupTimeZoneTimerWithCalendar:(id)a0;
- (void)invalidateTodayAndNotifyIfChanged;
- (BOOL)todayChangedAfterInvalidation;

@end
