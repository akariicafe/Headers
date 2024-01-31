@class NSString, NSMutableDictionary, NSTimer, NSCalendar;

@interface SBFDefaultDateProvider : NSObject <SBFDateProviding> {
    NSMutableDictionary *_minuteHandlers;
    unsigned long long _nextToken;
    NSTimer *_minuteTimer;
    NSCalendar *_calendar;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)date;
- (void)removeMinuteUpdateHandler:(id)a0;
- (void).cxx_destruct;
- (id)observeMinuteUpdatesWithHandler:(id /* block */)a0;
- (void)_minuteTimerFired;
- (void)_scheduleNextMinuteTimer;
- (void)_updateMinuteTimer;

@end
