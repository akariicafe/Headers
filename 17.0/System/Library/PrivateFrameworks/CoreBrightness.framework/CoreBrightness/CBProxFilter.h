@interface CBProxFilter : CBFilter {
    float _proxReleaseTime;
    BOOL _proxHasJustBeenRemoved;
    float _proxTriggerDelay;
    BOOL _triggered;
}

@property (nonatomic) BOOL isActive;

- (id)init;
- (void)dealloc;
- (void)setTriggered:(BOOL)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)filterEvent:(id)a0;
- (id)handleProximityEvent:(id)a0;
- (id)handleALSEvent:(id)a0;

@end
