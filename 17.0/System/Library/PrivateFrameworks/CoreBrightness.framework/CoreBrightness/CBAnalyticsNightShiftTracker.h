@interface CBAnalyticsNightShiftTracker : NSObject {
    double _modeChangeTimestamp;
    BOOL _isEnabled;
}

- (id)init;
- (BOOL)isStarted;
- (void)start:(BOOL)a0;
- (void)stop:(int)a0 isEnabled:(BOOL)a1;
- (void)update:(int)a0 isEnabled:(BOOL)a1;

@end
