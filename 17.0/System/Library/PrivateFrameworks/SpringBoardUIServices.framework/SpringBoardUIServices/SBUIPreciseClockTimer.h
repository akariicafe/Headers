@class NSCalendar, NSMutableDictionary, CADisplayLink;

@interface SBUIPreciseClockTimer : NSObject {
    CADisplayLink *_displayLink;
    NSMutableDictionary *_minuteUpdateHandlers;
    unsigned long long _nextToken;
    NSCalendar *_calendar;
    long long _lastHour;
    long long _lastMinute;
}

+ (id)sharedInstance;
+ (id)now;

- (void)_updateDisplayLink;
- (void)_handleTimePassed;
- (id)init;
- (void)_onDisplayLink:(id)a0;
- (void)dealloc;
- (void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)a0;
- (void).cxx_destruct;
- (void)stopMinuteUpdatesForToken:(id)a0;
- (id)startMinuteUpdatesWithHandler:(id /* block */)a0;

@end
