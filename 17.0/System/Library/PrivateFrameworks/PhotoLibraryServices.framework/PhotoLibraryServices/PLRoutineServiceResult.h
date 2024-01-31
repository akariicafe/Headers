@class NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface PLRoutineServiceResult : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id _result;
    NSError *_error;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (readonly) id result;
@property (readonly, copy) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (void)receivedReplyWithResult:(id)a0 error:(id)a1;
- (BOOL)waitForReplyWithTimeout:(unsigned long long)a0;

@end
