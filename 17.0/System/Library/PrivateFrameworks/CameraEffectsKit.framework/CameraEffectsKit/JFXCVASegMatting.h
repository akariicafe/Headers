@class JFXMatting;

@interface JFXCVASegMatting : JFXMatting {
    JFXMatting *_impl;
}

+ (struct CGSize { double x0; double x1; })mattingDepthInputSize;

- (void).cxx_destruct;
- (void)alphaMatteForFrameSet:(id)a0 mattingPerfState:(id)a1 completionHandler:(id /* block */)a2;
- (id)initForFrameSet:(id)a0;
- (BOOL)isValidForCameraFrameSet:(id)a0;

@end
