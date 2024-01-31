@class NSObject, AVPlayer, AVTaggedVideoOutputSpecification;
@protocol OS_dispatch_queue;

@interface AVPlayerTaggedBufferOutput : NSObject {
    AVPlayer *_playerWeakReference;
    struct OpaqueFigVideoTarget { } *_videoTarget;
    struct OpaqueFigVideoReceiver { } *_videoReceiver;
    AVTaggedVideoOutputSpecification *_outputSpecification;
    struct OpaqueCMTaggedBufferGroup { } *_lastSeenTaggedBufferGroup;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    id /* block */ _resourceLifeCycleHandler;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSpecification:(id)a0;
- (BOOL)_attachToPlayer:(id)a0;
- (int)_createAndConfigureVideoReceiverIfNecessaryOnStateQueue;
- (void)_detachFromPlayer:(id)a0;
- (void)_setResourceLifeCycleHandler:(id /* block */)a0;
- (BOOL)_setupWithTaggedOutputSpecification:(id)a0 exceptionReasonOut:(id *)a1;
- (struct OpaqueCMTaggedBufferGroup { } *)copyTaggedBufferGroupForHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1;
- (BOOL)hasNewTaggedBufferGroupForHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct OpaqueCMTaggedBufferGroup { } *)lastSeenTaggedBufferGroup;
- (id /* block */)resourceLifeCycleHandler;
- (void)setLastSeenTaggedBufferGroup:(struct OpaqueCMTaggedBufferGroup { } *)a0;

@end
