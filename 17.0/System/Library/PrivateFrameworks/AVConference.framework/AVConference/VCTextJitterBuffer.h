@class NSObject;
@protocol VCTextFrameReceiver, OS_dispatch_source;

@interface VCTextJitterBuffer : NSObject {
    struct tagVCTextJitterBufferConfiguration { unsigned int sampleRate; id<VCTextFrameReceiver> delegate; } _configuration;
    BOOL _resetRequested;
    id _delegate;
    struct JitterPreloadQueue_t { } *_preloadQueue;
    struct JitterQueue_t { } *_jitterQueue;
    NSObject<OS_dispatch_source> *_heartbeat;
    unsigned int _lastSequenceNumber;
    BOOL _firstFrameReceived;
}

- (void)dealloc;
- (id)delegate;
- (BOOL)start;
- (void)stop;
- (id)initWithConfiguration:(struct tagVCTextJitterBufferConfiguration { unsigned int x0; id x1; } *)a0;
- (void)setDelegate:(id)a0;
- (void)heartbeat;
- (struct tagAudioPacket { int x0; int x1; int x2; BOOL x3; unsigned short x4; unsigned int x5; int x6; int x7; double x8; int x9; unsigned char x10[1472]; int x11; unsigned char x12[256]; unsigned char x13; struct tagAudioFrame *x14[4]; int x15; double x16; int x17; struct tagDecoderSettings *x18; BOOL x19; unsigned int x20; unsigned char x21; unsigned short x22; } *)allocTextPacket;
- (struct tagAudioFrame { int x0; int x1; BOOL x2; unsigned short x3; unsigned int x4; unsigned char x5[1125]; int x6; int x7; unsigned char x8[16]; unsigned char x9; int x10; int x11; double x12; int x13; int x14; void /* function */ *x15; void *x16; struct tagDecoderSettings *x17; BOOL x18; unsigned int x19; unsigned char x20; unsigned short x21; struct tagAudioFrame *x22; struct tagAudioFrame *x23; unsigned int x24; } *)allocTextFrame;
- (void)enqueuePacket:(struct tagAudioPacket { int x0; int x1; int x2; BOOL x3; unsigned short x4; unsigned int x5; int x6; int x7; double x8; int x9; unsigned char x10[1472]; int x11; unsigned char x12[256]; unsigned char x13; struct tagAudioFrame *x14[4]; int x15; double x16; int x17; struct tagDecoderSettings *x18; BOOL x19; unsigned int x20; unsigned char x21; unsigned short x22; } *)a0;
- (void)jitterQueuePushPacket:(struct tagAudioPacket { int x0; int x1; int x2; BOOL x3; unsigned short x4; unsigned int x5; int x6; int x7; double x8; int x9; unsigned char x10[1472]; int x11; unsigned char x12[256]; unsigned char x13; struct tagAudioFrame *x14[4]; int x15; double x16; int x17; struct tagDecoderSettings *x18; BOOL x19; unsigned int x20; unsigned char x21; unsigned short x22; } *)a0;
- (void)releaseTextFrame:(struct tagAudioFrame { int x0; int x1; BOOL x2; unsigned short x3; unsigned int x4; unsigned char x5[1125]; int x6; int x7; unsigned char x8[16]; unsigned char x9; int x10; int x11; double x12; int x13; int x14; void /* function */ *x15; void *x16; struct tagDecoderSettings *x17; BOOL x18; unsigned int x19; unsigned char x20; unsigned short x21; struct tagAudioFrame *x22; struct tagAudioFrame *x23; unsigned int x24; } *)a0;
- (void)releaseTextPacket:(struct tagAudioPacket { int x0; int x1; int x2; BOOL x3; unsigned short x4; unsigned int x5; int x6; int x7; double x8; int x9; unsigned char x10[1472]; int x11; unsigned char x12[256]; unsigned char x13; struct tagAudioFrame *x14[4]; int x15; double x16; int x17; struct tagDecoderSettings *x18; BOOL x19; unsigned int x20; unsigned char x21; unsigned short x22; } *)a0;
- (BOOL)startHeartbeat;
- (void)stopHeartbeat;

@end
