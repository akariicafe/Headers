@interface CMPedestrianFenceManager : NSObject

@property (readonly, nonatomic) id _internal;

+ (BOOL)isAvailable;
+ (unsigned long long)availableFenceTypes;

- (id)init;
- (void)dealloc;
- (void)endSession;
- (void)startSession;
- (void)clearFence:(id)a0;
- (void)forceClearAllFences;
- (void)forceClearFence:(id)a0;
- (void)setFence:(id)a0 withRadius:(float)a1 withCompletion:(id /* block */)a2;
- (void)simulateFence:(id)a0 withExitAfterDelay:(double)a1 wake:(BOOL)a2 withCompletion:(id /* block */)a3;

@end
