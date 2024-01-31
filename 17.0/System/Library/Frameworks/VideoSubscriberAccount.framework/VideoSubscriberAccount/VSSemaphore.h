@class NSObject;
@protocol OS_dispatch_semaphore;

@interface VSSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void)signal;
- (void)wait;
- (id)init;
- (void).cxx_destruct;

@end
