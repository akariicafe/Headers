@class NSDate, NSTimeZone, _ATXMovingAverage;

@interface _ATXAppHistoricalAverageDose : NSObject {
    NSDate *_currentDay;
    double _currentDuration;
    int _dayCount;
    NSTimeZone *_timeZone;
}

@property (readonly, nonatomic) _ATXMovingAverage *movingAverage;

- (void).cxx_destruct;
- (void)skipTo:(id)a0;
- (void)_finishCurrentDay;
- (void)_updateMovingAverageForOneDay:(double)a0;
- (void)addDuration:(id)a0 endDate:(id)a1;
- (id)initWith:(id)a0 endDate:(id)a1 timeZone:(id)a2 alpha:(double)a3;

@end
