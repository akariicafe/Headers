@class NSObject, NSDate;
@protocol OS_dispatch_source;

@interface VSDelayOperation : VSAsyncOperation {
    NSObject<OS_dispatch_source> *_timerSource;
}

@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double tolerance;
@property (readonly, copy, nonatomic) NSDate *fireDate;
@property (nonatomic) BOOL shouldIgnoreTolerance;

+ (id)delayOperationWithDelay:(double)a0;
+ (id)delayOperationWithFireDate:(id)a0;

- (void)_cancelTimer;
- (id)init;
- (void)dealloc;
- (void)executionDidBegin;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDelay:(double)a0 tolerance:(double)a1;
- (id)initWithFireDate:(id)a0 tolerance:(double)a1;

@end
