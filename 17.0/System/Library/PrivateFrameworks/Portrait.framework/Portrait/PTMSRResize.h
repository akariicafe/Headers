@class PTMetalContext, NSArray, PTUtil, NSMutableArray;

@interface PTMSRResize : NSObject {
    struct __CVBuffer *_outputPixelbuffer[10];
    struct __IOSurface *_outputIOSurface[10];
    NSArray *_pyramidRGBA;
    int _allocatedIOSurfaces;
    struct __CFDictionary { } *_runOptions;
    struct CGColorSpace { } *_csRGBLinear;
    struct CGColorSpace { } *_csSRGB;
    PTMetalContext *_metalContext;
    PTUtil *_util;
    BOOL _hasMSR;
    BOOL _rotateTargetPixelBuffer;
    BOOL _sRGB;
    NSMutableArray *_additionalSteps;
    struct __IOSurfaceAccelerator { } *_accelRef;
    struct { int hTaps; int vTaps; int hPhases; int vPhases; int prePointBits; int postPointBits; } _cap;
}

- (id)init;
- (void)dealloc;
- (int)setCustomFilter:(int)a0 alignment:(int)a1 sourceWidth:(unsigned long long)a2 sourceHeight:(unsigned long long)a3 destinationWidth:(unsigned long long)a4 destinationHeight:(unsigned long long)a5 luma_param:(float)a6 chroma_param:(float)a7;
- (void).cxx_destruct;
- (int)queryCapabilities;
- (int)_downsample:(struct __IOSurface { } *)a0 toDest:(struct __IOSurface { } *)a1 useCustomFilter:(BOOL)a2 centerAlignment:(BOOL)a3 synchronous:(BOOL)a4;
- (int)_rotate:(struct __IOSurface { } *)a0 toDest:(struct __IOSurface { } *)a1 synchronous:(BOOL)a2;
- (struct __CVBuffer { } *)addAdditionalOutput:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (unsigned int)downsampleQuarterSizeToTargetSize:(struct __CVBuffer { } *)a0;
- (int)downsampleToLayer:(int)a0;
- (unsigned int)downsampleToQuarterSize:(struct __CVBuffer { } *)a0;
- (id)initWithMetalContext:(id)a0 inputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 targetSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 rotateTargetPixelBuffer:(BOOL)a3 sRGB:(BOOL)a4 sharedResources:(id)a5;
- (id)pyramidRGBA;
- (struct __CVBuffer **)pyramidRGBAPixelBuffer;
- (unsigned int)rotate:(SEL)a0 crop:(struct __IOSurface { } *)a1 rotationDegree:(int)a2 toDest:(struct __IOSurface { } *)a3 synchronous:(BOOL)a4;
- (id)targetRGBA;
- (struct __CVBuffer { } *)targetRGBAPixelBuffer;

@end
