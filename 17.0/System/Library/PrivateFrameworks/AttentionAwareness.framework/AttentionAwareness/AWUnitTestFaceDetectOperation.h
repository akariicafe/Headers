@class NSObject, AWUnitTestPearlDevice;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AWUnitTestFaceDetectOperation : BKFaceDetectOperation {
    NSObject<OS_dispatch_queue> *_awQueue;
    NSObject<OS_dispatch_source> *_awInitTimer;
    NSObject<OS_dispatch_source> *_deadlineTimer;
    NSObject<OS_dispatch_source> *_streamingTimer;
    BOOL _started;
    BOOL _finished;
    BOOL _errorState;
}

@property (weak, nonatomic) AWUnitTestPearlDevice *unitTestDevice;

- (id)init;
- (void)dealloc;
- (BOOL)startWithError:(id *)a0;
- (void)startWithReply:(id /* block */)a0;
- (void)setErrorState:(BOOL)a0;
- (long long)state;
- (void)awSetFaceFound;
- (BOOL)startStreamWithError:(id *)a0;
- (void)awFinishWithReason:(long long)a0;
- (void)awDeliverFaceFound;
- (void)awSetFaceDetectError:(BOOL)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)awDeliverStreamingEvent;

@end
