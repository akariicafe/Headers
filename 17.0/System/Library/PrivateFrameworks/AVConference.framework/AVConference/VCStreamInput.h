@class NSString, NSDictionary, NSNumber, NSObject;
@protocol OS_dispatch_queue, VCStreamInputDelegate;

@interface VCStreamInput : VCObject <VCStreamInputCaptureSourceDelegate> {
    NSObject<OS_dispatch_queue> *_streamInputQueue;
    void /* function */ *_sampleBufferHandler;
    struct opaqueCMFormatDescription { } *_format;
    id<VCStreamInputDelegate> _strongDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastBufferTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastAveragedTime;
    _Atomic unsigned int _sampleBufferCount;
    double _estimatedJitter;
    double _lastTransitTime;
    struct opaqueVCRemoteImageQueue { } *_receiverQueue;
}

@property (readonly) NSDictionary *reportingStats;
@property (readonly, nonatomic) NSNumber *streamInputID;
@property (readonly, nonatomic) BOOL isStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (struct opaqueCMFormatDescription { } *)streamFormat;
- (void)didStopStreamInputCaptureSource;
- (BOOL)createRemoteReceiveQueue:(id)a0;
- (void)didResumeStreamInputCaptureSource;
- (void)didStartStreamInputCaptureSource;
- (void)didSuspendStreamInputCaptureSource;
- (id)initWithStreamInputID:(id)a0 format:(struct opaqueCMFormatDescription { } *)a1 delegate:(id)a2 delegateQueue:(id)a3 remoteQueue:(id)a4;
- (BOOL)isEqualFormat:(struct opaqueCMFormatDescription { } *)a0;
- (void)thermalLevelDidChange:(int)a0;

@end
