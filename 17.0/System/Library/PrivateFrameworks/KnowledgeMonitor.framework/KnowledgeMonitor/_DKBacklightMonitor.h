@class BMSource;

@interface _DKBacklightMonitor : _DKMonitor {
    int notifyToken;
    BMSource *_source;
}

+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)entitlements;
+ (void)setIsBacklit:(BOOL)a0;
+ (BOOL)indicatesScreenOnWithNotificationState:(id)a0;
+ (id)_eventWithState:(id)a0;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)obtainCurrentValue;
- (void)synchronouslyReflectCurrentValue;
- (void).cxx_destruct;
- (void)deactivate;

@end
