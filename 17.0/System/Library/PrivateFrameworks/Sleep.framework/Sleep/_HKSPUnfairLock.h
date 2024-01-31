@class NSString;

@interface _HKSPUnfairLock : NSObject <HKSPMutexProvider> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)performBlock:(id /* block */)a0;
- (void)performBlockAssertingLocked:(id /* block */)a0;

@end
