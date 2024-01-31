@class NSPointerArray, NSMutableSet, NSObject;
@protocol OS_dispatch_group;

@interface _SYQuiescenceObserver : NSObject {
    NSPointerArray *_quiescenceQueues;
    NSObject<OS_dispatch_group> *_allocationGroup;
    NSMutableSet *_allocations;
}

+ (id)sharedInstance;
+ (BOOL)isQuiescenceEnabled;
+ (void)setQuiescenceEnabled:(BOOL)a0;

- (id)init;
- (void)registerQueue:(id)a0;
- (void).cxx_destruct;
- (void)decrementAllocationCount:(id)a0;
- (void)incrementAllocationCount:(id)a0;
- (void)notifyOnDeallocationComplete:(id /* block */)a0;
- (void)notifyOnQuiescence:(id /* block */)a0;
- (BOOL)waitForDeallocationCompleteWithTimeout:(double)a0;
- (BOOL)waitForQuiescenceWithTimeout:(double)a0;

@end
