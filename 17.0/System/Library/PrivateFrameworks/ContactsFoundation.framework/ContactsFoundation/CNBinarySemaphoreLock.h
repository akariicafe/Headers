@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface CNBinarySemaphoreLock : NSObject <NSLocking> {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (copy) NSString *name;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)invalidate;
- (void)unlock;
- (id)description;
- (void).cxx_destruct;

@end
