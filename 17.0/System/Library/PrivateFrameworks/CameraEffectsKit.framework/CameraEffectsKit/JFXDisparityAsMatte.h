@interface JFXDisparityAsMatte : JFXMatting {
    struct __CVPixelBufferPool { } *_fixedPointBufferPool;
    struct __CVPixelBufferPool { } *_rotatedFPBufferPool;
    struct __CVPixelBufferPool { } *_scaledUpFPBufferPool;
    struct __CVPixelBufferPool { } *_alphaMattePool;
}

+ (BOOL)_defaultMatteGeneratorPrefersDepth;
+ (struct CGSize { double x0; double x1; })mattingDepthInputSize;

- (void)alphaMatteForFrameSet:(id)a0 mattingPerfState:(id)a1 completionHandler:(id /* block */)a2;
- (id)initForFrameSet:(id)a0;

@end
