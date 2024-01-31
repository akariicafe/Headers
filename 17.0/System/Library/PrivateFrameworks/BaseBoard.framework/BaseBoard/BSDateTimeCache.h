@interface BSDateTimeCache : NSObject {
    double _yesterday;
    double _today;
    double _tomorrow;
    double _2daysFromNow;
    double _6daysAgo;
    double _prevWeek;
    double _nextWeek;
    double _lastAttemptedResetTime;
    double _lastSuccessfulResetTime;
    BOOL _isResetting;
}

+ (id)sharedInstance;

- (BOOL)isToday:(double)a0;
- (id)init;
- (void)dealloc;
- (double)prevWeek;
- (BOOL)isTomorrow:(double)a0;
- (double)yesterday;
- (BOOL)isWithinPrevWeek:(double)a0 includeToday:(BOOL)a1;
- (void)_resetAndConfigure;
- (BOOL)isYesterday:(double)a0;
- (id)description;
- (double)today;
- (BOOL)isWithinNextWeek:(double)a0;
- (BOOL)isWithinPrevWeek:(double)a0;
- (double)nextWeek;
- (double)tomorrow;

@end
