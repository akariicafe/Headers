@interface NoopGKViceroyNATObserver : NSObject <GKViceroyNATObserver>

@property (readonly, nonatomic) unsigned long long currentNATType;

- (void)applySettingsAndAwaitReady:(id)a0;
- (void)getNATTypeWithForceRelay:(BOOL)a0 withHandler:(id /* block */)a1;

@end
