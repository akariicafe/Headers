@class NSObject;
@protocol OS_dispatch_queue;

@interface IDSInternalQueueController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    void *_contextKey;
}

+ (id)sharedInstance;

- (id)initWithQueue:(id)a0;
- (id)init;
- (BOOL)assertQueueIsCurrent;
- (id)initWithName:(char *)a0 contextKey:(void *)a1;
- (BOOL)isQueueCurrent;
- (BOOL)assertQueueIsNotCurrent;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (id)queue;
- (void)performBlock:(id /* block */)a0;

@end
