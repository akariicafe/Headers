@class NSLock, PLThumbnailContextCleanupTimer;

@interface PLThumbnailCascadingDownscaleContext : NSObject {
    NSLock *_lock;
    struct _CMPhotoCascadeContext { } *_portraitContext;
    struct _CMPhotoCascadeContext { } *_landscapeContext;
    PLThumbnailContextCleanupTimer *_idleCleanupTimer;
}

- (id)init;
- (BOOL)downscaleImageSurface:(struct __IOSurface { } *)a0 destinationCount:(int)a1 sizes:(struct { int x0; int x1; } *)a2 cropModes:(int *)a3 pixelFormat:(unsigned int)a4 bytesPerRowAlignment:(int)a5 destinationData:(id)a6;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_cleanupTimerFired;
- (void)discardContexts;

@end
