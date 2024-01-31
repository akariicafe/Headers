@class NSError;

@interface AVResult : NSObject {
    struct OpaqueFigSimpleMutex { } *_ivarAccessLock;
    long long _status;
    NSError *_error;
}

@property (readonly, getter=isFailed) BOOL failed;

- (id)init;
- (void)getStatus:(long long *)a0 error:(id *)a1;
- (void)dealloc;
- (void)markAsCompleted;
- (void)markAsFailedWithError:(id)a0;

@end
