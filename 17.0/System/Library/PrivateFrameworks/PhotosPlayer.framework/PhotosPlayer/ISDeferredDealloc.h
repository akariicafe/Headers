@class NSObject;
@protocol OS_dispatch_queue;

@interface ISDeferredDealloc : NSObject {
    NSObject<OS_dispatch_queue> *_deferredDeallocQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_performDeferredDealloc:(id)a0;
- (void)_performDeferredDealloc:(id)a0 withDelay:(double)a1;

@end
