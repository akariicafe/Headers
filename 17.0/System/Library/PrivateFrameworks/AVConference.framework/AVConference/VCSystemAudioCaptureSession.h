@class VCAudioIO;

@interface VCSystemAudioCaptureSession : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateLock;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioBasicDescription;
    unsigned int _samplesPerFrame;
    struct opaqueCMSimpleQueue { } *_poolQueue;
    struct opaqueCMSimpleQueue { } *_outputQueue;
    VCAudioIO *_audioIO;
}

- (void)dealloc;
- (BOOL)start;
- (BOOL)stop;
- (id)initWithConfiguration:(struct { int x0; struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } x1; int x2; int x3; unsigned int x4; int x5; } *)a0;
- (void)cleanupQueue:(struct opaqueCMSimpleQueue **)a0;
- (BOOL)createAudioBufferPool;
- (void)resetAudioBufferPool;
- (BOOL)setupAudioIOWithConfig:(struct { int x0; struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } x1; int x2; int x3; unsigned int x4; int x5; } *)a0;

@end
