@class AVVideoCompositionRenderHintInternal;

@interface AVVideoCompositionRenderHint : NSObject {
    AVVideoCompositionRenderHintInternal *_internal;
}

@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startCompositionTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } endCompositionTime;

- (void)dealloc;
- (id)initWithStartCompositionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 endCompositionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 subsequentStartCompositionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 subsequentEndCompositionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })subsequentEndCompositionTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })subsequentStartCompositionTime;

@end
