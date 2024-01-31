@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CURetrier : NSObject {
    BOOL _invalidateCalled;
    NSObject<OS_dispatch_source> *_retryTimer;
}

@property (copy, nonatomic) id /* block */ actionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) double interval;
@property (nonatomic) double leeway;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) double startTime;

- (id)init;
- (void)succeeded;
- (void)start;
- (void)invalidateDirect;
- (void)succeededDirect;
- (void)invalidate;
- (void)failedDirect;
- (void).cxx_destruct;
- (void)failed;
- (void)startDirect;

@end
