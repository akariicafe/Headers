@class NSMapTable;

@interface CHDelegateController : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } delegateLock;
@property (readonly, nonatomic) NSMapTable *delegateToQueue;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (id)init;
- (void)removeDelegate:(id)a0;
- (void)enumerateDelegatesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
