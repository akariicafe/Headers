@class NSNumber, BMSource;

@interface _DKAirplaneModeMonitor : _DKMonitor {
    BMSource *_source;
}

@property (retain, nonatomic) NSNumber *airplaneModeStatus;
@property struct __SCPreferences { } *radioPrefs;

+ (id)eventStream;
+ (id)_BMEventWithState:(BOOL)a0;
+ (id)_eventWithState:(BOOL)a0;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)updateAirplaneModeStatus;
- (void)deactivate;

@end
