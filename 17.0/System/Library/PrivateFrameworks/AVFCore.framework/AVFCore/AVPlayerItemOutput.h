@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject {
    AVPlayerItemOutputInternal *_outputInternal;
}

@property (nonatomic) BOOL suppressesPlayerRendering;

- (id)init;
- (void)dealloc;
- (BOOL)isDefunct;
- (id)_weakReference;
- (BOOL)_attachToPlayerItem:(id)a0;
- (struct OpaqueCMTimebase { } *)_copyTimebase;
- (void)_detachFromPlayerItem;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_itemTimeForHostTimeAsCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_setTimebase:(struct OpaqueCMTimebase { } *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })itemTimeForHostTime:(double)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })itemTimeForMachAbsoluteTime:(long long)a0;

@end
