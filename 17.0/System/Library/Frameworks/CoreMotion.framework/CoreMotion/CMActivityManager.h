@interface CMActivityManager : NSObject {
    id _internal;
}

@property (copy) id /* block */ activityHandler;
@property (readonly, nonatomic, getter=isActivityAvailable) BOOL activityAvailable;

- (id)init;
- (void)dealloc;
- (long long)overrideOscarSideband:(BOOL)a0 withState:(long long)a1;
- (long long)simulateMotionState:(BOOL)a0 withState:(long long)a1;
- (long long)simulateMotionStateYouthWithState:(long long)a0;

@end
