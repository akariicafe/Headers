@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface _UIReusePool : NSObject {
    NSMutableSet *_reuseSet;
    unsigned long long _purgePolicy;
    NSObject<OS_dispatch_queue> *_reuseSetAccessQueue;
}

@property (readonly, nonatomic) unsigned long long purgePolicy;

+ (void)__applicationWillEnterForeground:(id)a0;
+ (void)initialize;
+ (void)__applicationDidEnterBackground:(id)a0;

- (id)init;
- (void)drainPool;
- (id)initWithPolicy:(unsigned long long)a0;
- (id)reusableObject;
- (void).cxx_destruct;
- (void)addObject:(id)a0;

@end
