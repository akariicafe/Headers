@interface FRCScaler : NSObject {
    struct __IOSurfaceAccelerator { } *_scaler;
}

- (id)init;
- (void)dealloc;
- (void)downScaleFrameSource:(struct __CVBuffer { } *)a0 destination:(struct __CVBuffer { } *)a1 rotate:(long long)a2 waitForCompletion:(BOOL)a3;
- (void)scaleFrameSource:(struct __CVBuffer { } *)a0 destination:(struct __CVBuffer { } *)a1 cropRectangles:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a2 upscale:(BOOL)a3 rotate:(long long)a4 waitForCompletion:(BOOL)a5;
- (void)upScaleAndCropFrameSource:(struct __CVBuffer { } *)a0 destination:(struct __CVBuffer { } *)a1 upscale:(BOOL)a2 rotate:(long long)a3 waitForCompletion:(BOOL)a4;

@end
