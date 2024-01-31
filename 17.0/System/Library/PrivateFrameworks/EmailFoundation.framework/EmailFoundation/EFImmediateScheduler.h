@class NSString;

@interface EFImmediateScheduler : NSObject <EFScheduler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performSyncBlock:(id /* block */)a0;
- (id)performWithObject:(id)a0;
- (id)performCancelableBlock:(id /* block */)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)performSyncBarrierBlock:(id /* block */)a0;
- (void)performVoucherPreservingBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0;

@end
