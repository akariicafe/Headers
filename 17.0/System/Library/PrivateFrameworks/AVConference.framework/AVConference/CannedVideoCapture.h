@class NSString, VCCannedVideoCaptureSource, NSObject;
@protocol OS_dispatch_queue;

@interface CannedVideoCapture : VCVideoCapture <VCVideoSource> {
    struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; struct _VCVideoSourceToken { union { struct { unsigned int x0 : 24; unsigned char x1 : 8; } x0; unsigned int x1; } x0; } x1; int x2; BOOL x3; struct { BOOL x0; BOOL x1; int x2; BOOL x3; BOOL x4; int x5; unsigned char x6; } x4; } *_pimpl;
    NSObject<OS_dispatch_queue> *_captureSessionQueue;
    VCCannedVideoCaptureSource *_captureSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)cannedVideoTypeForPath:(id)a0;
+ (int)createPixelBufferPool:(struct __CVPixelBufferPool **)a0 withWidth:(int)a1 height:(int)a2;

- (int)stop:(BOOL)a0;
- (void)setOrientation:(int)a0;
- (void)dealloc;
- (int)setFrameRate:(int)a0;
- (int)startPreview;
- (BOOL)isPreviewRunning;
- (BOOL)isFrontCamera;
- (BOOL)cameraSupportsFormatWidth:(int)a0 height:(int)a1;
- (int)configureCaptureWithToken:(struct _VCVideoSourceToken { union { struct { unsigned int x0 : 24; unsigned char x1 : 8; } x0; unsigned int x1; } x0; })a0;
- (int)copyColorInfo:(const struct __CFDictionary **)a0;
- (int)frameBecameAvailableCount:(int *)a0 figBufferQueueEmptyCount:(int *)a1 figBufferQueueErrorCount:(int *)a2;
- (int)frameCount:(BOOL)a0;
- (int)getFrameRate;
- (id)initWithCaptureServer:(id)a0 protocolFunctions:(const struct tagVCVideoCaptureServerProtocolRealtimeInstanceVTable { void /* function */ *x0; } *)a1 width:(int)a2 height:(int)a3 frameRate:(int)a4 videoSourceToken:(struct _VCVideoSourceToken { union { struct { unsigned int x0 : 24; unsigned char x1 : 8; } x0; unsigned int x1; } x0; })a5 video:(id)a6 isCamera:(BOOL)a7 error:(int *)a8;
- (BOOL)isPortraitResolutionCaptureActive;
- (int)setWidth:(int)a0 height:(int)a1 frameRate:(int)a2;
- (int)startCaptureWithWidth:(int)a0 height:(int)a1 frameRate:(int)a2;

@end
