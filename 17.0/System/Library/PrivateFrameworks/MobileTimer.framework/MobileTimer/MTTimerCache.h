@class MTTimer, NSMutableArray;

@interface MTTimerCache : NSObject

@property (copy, nonatomic) id /* block */ updateBlock;
@property (retain, nonatomic) NSMutableArray *orderedTimers;
@property (retain, nonatomic) MTTimer *nextTimer;
@property (nonatomic) BOOL needsUpdate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } cacheLock;

- (void)_getCachedTimersWithCompletion:(id /* block */)a0 doSynchronous:(BOOL)a1;
- (void)getCachedTimersWithCompletion:(id /* block */)a0;
- (void)markNeedsUpdate;
- (void).cxx_destruct;
- (id)initWithUpdateBlock:(id /* block */)a0;
- (void)getCachedTimersSyncWithCompletion:(id /* block */)a0;
- (BOOL)_isUpdateNeeded;
- (void)_withLock:(id /* block */)a0;

@end
