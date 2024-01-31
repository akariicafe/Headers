@class GKNATObserver, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface DefaultGKViceroyNATObserver : NSObject <GKViceroyNATObserver, GKNATObserverDelegate>

@property (retain, nonatomic) GKNATObserver *natObserver;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *natQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *natSemaphore;
@property (nonatomic) int natType;
@property (readonly, nonatomic) unsigned long long currentNATType;

+ (id)syncQueue;

- (id)init;
- (void)performAsync:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performSync:(id /* block */)a0;
- (void)NATTypeDidChange:(int)a0;
- (void)applySettingsAndAwaitReady:(id)a0;
- (void)awaitReady;
- (void)getNATTypeWithForceRelay:(BOOL)a0 withHandler:(id /* block */)a1;
- (void)setupObserver;
- (void)tearDownObserver;

@end
