@interface _DKCalendarMonitor : _DKMonitor {
    BOOL _enabled;
}

+ (id)eventStream;
+ (id)entitlements;
+ (id)_eventWithTitle:(id)a0 interaction:(id)a1;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)update;
- (void)stop;
- (void)_receiveDatabaseChangeNotification:(id)a0;
- (void)deactivate;

@end
