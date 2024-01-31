@class FigStateMachine, FigDelegateStorage;

@interface FigCameraViewfinderStream : NSObject {
    FigDelegateStorage *_delegateStorage;
    FigStateMachine *_stateMachine;
    struct OpaqueFigEndpoint { } *_endpoint;
    struct OpaqueFigEndpointStream { } *_stream;
    struct OpaqueFigVirtualDisplaySource { } *_displaySource;
    id _endpointsChangedNotificationToken;
    id _streamsChangedNotificationToken;
}

+ (void)initialize;

- (void)close;
- (id)init;
- (void)dealloc;
- (int)enqueueVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)openWithDestination:(id)a0;

@end
