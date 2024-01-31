@class NSObject;
@protocol OS_dispatch_queue;

@interface VKFrameProcessor : NSObject <NSLocking> {
    NSObject<OS_dispatch_queue> *_resultHandlerQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _isExecuting;
    BOOL _isCancelled;
    BOOL _requestImmediateProcessing;
    double _processingInterval;
    double _infrequentProcessingInterval;
    double _lastProcessingTime;
    double _currentProcessingInterval;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic, getter=isExecuting) BOOL executing;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;

+ (double)defaultInfrequentProcessingInterval;
+ (double)defaultProcessingInterval;

- (id)init;
- (void)reset;
- (void)lock;
- (void)unlock;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)wantsThrottling;
- (void)enqueueFrame:(id)a0;
- (double)infrequentProcessingInterval;
- (void)processFrame:(id)a0;
- (double)processingInterval;
- (void)requestImmediateProcessing;
- (void)setInfrequentProcessingInterval:(double)a0;
- (void)setProcessingInterval:(double)a0;

@end
