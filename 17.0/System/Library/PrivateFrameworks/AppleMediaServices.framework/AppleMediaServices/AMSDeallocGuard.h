@interface AMSDeallocGuard : NSObject

@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) BOOL invalidated;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } invalidationLock;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDeallocGuardBlock:(id /* block */)a0;

@end
