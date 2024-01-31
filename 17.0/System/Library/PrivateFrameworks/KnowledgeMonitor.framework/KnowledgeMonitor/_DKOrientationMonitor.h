@class FBSDisplayLayoutMonitor, BMSource;

@interface _DKOrientationMonitor : _DKMonitor {
    FBSDisplayLayoutMonitor *_monitor;
    BMSource *_source;
}

+ (id)eventStream;
+ (id)entitlements;
+ (id)_eventWithValue:(long long)a0;
+ (id)_BMEventWithValue:(long long)a0;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)deactivate;

@end
