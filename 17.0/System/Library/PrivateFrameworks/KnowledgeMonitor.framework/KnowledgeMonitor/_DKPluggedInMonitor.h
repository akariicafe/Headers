@class BMSource;

@interface _DKPluggedInMonitor : _DKMonitor {
    BMSource *_source;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) int pluggedInToken;

+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)entitlements;
+ (void)setIsPluggedIn:(BOOL)a0;
+ (id)_BMEventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;
+ (id)_eventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;

- (void)dealloc;
- (void)start;
- (void)setCurrentState;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void).cxx_destruct;
- (void)deactivate;

@end
