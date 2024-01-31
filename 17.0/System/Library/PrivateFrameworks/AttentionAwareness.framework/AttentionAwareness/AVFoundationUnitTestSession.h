@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, AVFoundationUnitTestEventReceiving;

@interface AVFoundationUnitTestSession : NSObject <AVFoundationUnitTestStreamerCreating> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_eventDeliveryQueue;
    NSObject<OS_dispatch_source> *_streamingTimer;
    id<AVFoundationUnitTestEventReceiving> _delegate;
    struct { BOOL AWAttentionStreamerActivateEyeRelief; BOOL AWAttentionStreamerActivateAttentionDetection; } _currentOptions;
    BOOL _errorState;
}

- (id)init;
- (void)setErrorState:(BOOL)a0;
- (void).cxx_destruct;
- (void)AVFoundationDeliverStreamingEvent;
- (BOOL)cancelUnitTestStream;
- (void)initializeStreamingTimer;
- (void)setAVFoundationDelegate:(id)a0;
- (BOOL)startUnitTestStream:(id)a0 options:(struct { BOOL x0; BOOL x1; })a1;

@end
