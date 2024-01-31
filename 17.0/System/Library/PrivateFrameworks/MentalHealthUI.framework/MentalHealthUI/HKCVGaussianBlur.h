@class HKCVKernelCache, NSMutableDictionary;
@protocol MTLLibrary, MTLBinaryArchive;

@interface HKCVGaussianBlur : NSObject {
    struct { void /* unknown type, empty encoding */ origin; void /* unknown type, empty encoding */ size; } _planStepROIs[16];
    struct { void /* unknown type, empty encoding */ origin; void /* unknown type, empty encoding */ size; } _r;
}

@property (readonly, nonatomic) float sigma;
@property (readonly, nonatomic) struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } clipRect;
@property (readonly, nonatomic) struct { double *plan; unsigned long long _numSteps; float _scale; int _planSteps[8]; } planInfo;
@property (readonly, nonatomic) HKCVKernelCache *kernelCache;
@property (readonly, nonatomic) NSMutableDictionary *cache;
@property (readonly, nonatomic) id<MTLLibrary> library;
@property (readonly, nonatomic) id<MTLBinaryArchive> archive;

- (void)dealloc;
- (id)cachedTextureForDevice:(id)a0 pixelInfo:(struct WMPSPixelInfo { unsigned short x0 : 10; unsigned char x1 : 6; unsigned char x2 : 4; unsigned char x3 : 4; unsigned char x4 : 4; unsigned char x5 : 4; unsigned char x6 : 8; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 6; unsigned char x17 : 4; unsigned char x18 : 3; unsigned char x19 : 2; })a1 identifier:(unsigned long long)a2 textureSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 protectionOptions:(unsigned long long)a4;
- (id)initWithSigma:(float)a0 clipRect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 kernelCache:(id)a2 archive:(id)a3 library:(id)a4;
- (void)prepareRAndPlanStepsROIs;

@end
