@class NSObject;
@protocol OS_dispatch_queue;

@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher {
    NSObject<OS_dispatch_queue> *_queue;
    int _suspendCount;
}

@property (readonly, getter=isSuspended) BOOL suspended;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)sharedLowPriorityDispatcher;

- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (void)suspend;
- (id)autorelease;
- (void)resume;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)p_dispatchQueue;

@end
