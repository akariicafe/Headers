@class NSObject;
@protocol OS_dispatch_semaphore;

@interface CRXUDispatchSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> *_sem;
}

- (void)signal;
- (void)wait;
- (id)init;
- (id)initWithValue:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)waitFor:(double)a0;
- (id)debugDescription;

@end
