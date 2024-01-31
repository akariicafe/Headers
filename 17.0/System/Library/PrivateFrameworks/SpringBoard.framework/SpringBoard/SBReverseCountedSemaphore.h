@class NSObject;
@protocol OS_dispatch_group;

@interface SBReverseCountedSemaphore : NSObject {
    NSObject<OS_dispatch_group> *_group;
}

- (id)init;
- (BOOL)waitWithTimeout:(double)a0;
- (void)decrement;
- (void).cxx_destruct;
- (void)increment;

@end
