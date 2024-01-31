@class NSConditionLock;

@interface DMCSynchronous : NSObject {
    NSConditionLock *_lock;
}

- (void)complete;
- (id)init;
- (void)waitForCompletion;
- (void).cxx_destruct;

@end
