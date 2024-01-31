@class NSString, NSCalendar, NSHashTable, NSDate, NSTimer;

@interface PROverridableDateProvider : NSObject <PRDateProviding> {
    NSHashTable *_minuteObservers;
    NSCalendar *_calendar;
    NSTimer *_minuteTimer;
}

@property (copy, nonatomic) NSDate *overrideDate;
@property (readonly, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_minuteTimerFired;
- (void)_scheduleNextMinuteTimer;
- (void)_updateMinuteTimer;
- (void)_notifyObserversDidUpdateDate:(id)a0;
- (void)addMinuteUpdateObserver:(id)a0;
- (void)removeMinuteUpdateObserver:(id)a0;

@end
