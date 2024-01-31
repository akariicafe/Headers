@class NSTimer, NSMapTable, GEOAlmanac;

@interface _UISunScheduleController : NSObject {
    NSMapTable *_observers;
    GEOAlmanac *_almanac;
    BOOL _hasTimeZoneLocation;
    struct { double latitude; double longitude; } _timeZoneLocation;
    BOOL _inScheduleTime;
    NSTimer *_nextEventTimer;
    double _sunsetAbsolute;
    double _sunriseAbsolute;
}

@property (readonly, nonatomic, getter=isInScheduleTime) BOOL inScheduleTime;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_updateStatus;
- (void)_significantTimeChange;
- (void).cxx_destruct;
- (void)forceUpdate;
- (void)_timeZoneChange;
- (id)nextTransition:(BOOL)a0;
- (void)_invalidateNextEventTimer;
- (void)_notifyChange;
- (void)_setNextEventTimerToAbsoluteTime:(double)a0;
- (void)_updateGeoCity;
- (void)_updateInScheduleTime:(BOOL)a0;
- (void)_updateStatusWithAbsoluteTime:(double)a0;
- (void)_updateSunriseSunsetTimesRelativeTo:(double)a0;
- (void)addObserver:(id)a0 changeHandler:(id /* block */)a1;

@end
