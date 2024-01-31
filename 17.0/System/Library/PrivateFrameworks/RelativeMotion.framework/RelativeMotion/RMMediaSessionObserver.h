@class RMRelativeMotionManager;

@interface RMMediaSessionObserver : NSObject

@property (retain, nonatomic) RMRelativeMotionManager *manager;

- (void).cxx_destruct;
- (void)startSessionStatusUpdatesForClientMode:(long long)a0 toQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)stopSessionStatusUpdates;

@end
