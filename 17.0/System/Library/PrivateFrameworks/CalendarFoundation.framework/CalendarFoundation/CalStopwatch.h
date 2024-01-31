@class NSMutableDictionary;

@interface CalStopwatch : NSObject {
    BOOL _isRunning;
    unsigned long long _lastStartTime;
    unsigned long long _elapsedTime;
    BOOL _hasValidElapsedTime;
    NSMutableDictionary *_events;
}

@property BOOL usesSignalFlags;

- (id)init;
- (void)reset;
- (id)elapsedTimeAsString:(int)a0;
- (void)start;
- (double)markEventEnd:(id)a0;
- (void)stop;
- (id)description;
- (unsigned long long)elapsedTimeAsNumber:(int)a0;
- (void).cxx_destruct;
- (double)markEventSplit:(id)a0;
- (unsigned long long)elapsedTimeInNanoseconds;
- (void)markEventStart:(id)a0;

@end
