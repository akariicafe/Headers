@class NSObject;
@protocol OS_dispatch_queue, AVMediaDataRequesterConsumer;

@interface AVMediaDataRequester : NSObject {
    id<AVMediaDataRequesterConsumer> _mediaDataConsumer;
    struct OpaqueFigSimpleMutex { } *_invalidateMutex;
    BOOL _invalidatePending;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (readonly, nonatomic) id /* block */ requestBlock;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (BOOL)_isInvalidatePending;
- (void)_requestMediaDataIfReady;
- (void)_setInvalidatePending;
- (id)initWithMediaDataConsumer:(id)a0 requestQueue:(id)a1 requestBlock:(id /* block */)a2;
- (void)startRequestingMediaData;

@end
