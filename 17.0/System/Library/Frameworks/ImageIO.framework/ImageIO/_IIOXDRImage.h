@class NSDictionary;

@interface _IIOXDRImage : NSObject {
    struct CGColorSpace { } *_space;
}

@property (readonly, nonatomic) NSDictionary *makerNote;
@property (readonly, nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly) long long type;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (nonatomic) int orientation;
@property (nonatomic) double headroom;
@property (readonly) struct __CVBuffer { } *imageBuffer;
@property (readonly) struct __CVBuffer { } *gainMapBuffer;
@property (copy, nonatomic) NSDictionary *imageMetadata;
@property (retain, nonatomic) struct CGImageMetadata { } *gainMapMetadata;
@property (nonatomic) int gainMapOrientation;

+ (id)metalCommandQueue;
+ (double)gainMapHeadroomForHDRGain:(double)a0 gainMapValue:(double)a1;
+ (id)metalDevice;
+ (BOOL)canProcessInputBufferWithAttributes:(id)a0;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })computeGridSizeForThreadGroupSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 imageSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })computeThreadGroupSizeForImageSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 pipelineState:(id)a1;
+ (BOOL)convertEDR:(id)a0 toHLG:(id)a1;
+ (BOOL)convertEDR:(id)a0 toMPP:(id)a1;
+ (BOOL)convertEDR:(id)a0 toPQ:(id)a1;
+ (BOOL)convertEDR:(id)a0 toSDR:(id)a1;
+ (BOOL)convertHLG:(id)a0 toEDR:(id)a1;
+ (BOOL)convertHLG:(id)a0 toHLG:(id)a1;
+ (BOOL)convertHLG:(id)a0 toMPP:(id)a1;
+ (BOOL)convertHLG:(id)a0 toSDR:(id)a1;
+ (BOOL)convertImage:(id)a0 toImage:(id)a1;
+ (BOOL)convertMPP:(id)a0 toEDR:(id)a1;
+ (BOOL)convertMPP:(id)a0 toHLG:(id)a1;
+ (BOOL)convertMPP:(id)a0 toPQ:(id)a1;
+ (BOOL)convertPQ:(id)a0 toEDR:(id)a1;
+ (BOOL)convertPQ:(id)a0 toMPP:(id)a1;
+ (BOOL)convertPQ:(id)a0 toSDR:(id)a1;
+ (BOOL)convertSDR:(id)a0 toEDR:(id)a1;
+ (struct CGImageMetadata { } *)createGainMapMetadataWithHeadroom:(double)a0;
+ (BOOL)getColorTransform:(struct { struct { int x0; struct XDRColorTRCParametric { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { int x0; struct XDRColorTRCParametric { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x1; } x2; } *)a0 fromSourceSpace:(struct CGColorSpace { } *)a1 toTargetSpace:(struct CGColorSpace { } *)a2 options:(id)a3;
+ (BOOL)getGainMapHeadroom:(double *)a0 fromMetadata:(struct CGImageMetadata { } *)a1;
+ (BOOL)getGainMapHeadroom:(double *)a0 fromProperties:(id)a1;
+ (BOOL)getGainMapVersionMajor:(unsigned long long *)a0 minor:(unsigned long long *)a1 fromMetadata:(struct CGImageMetadata { } *)a2;
+ (BOOL)getInputYCCMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a0 chromaSubsampling:(void *)a1 forBuffer:(struct __CVBuffer { } *)a2;
+ (BOOL)getOutputYCCMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a0 chromaSubsampling:(void *)a1 forBuffer:(struct __CVBuffer { } *)a2;
+ (id)metalComputePipelineStateWithFunctionName:(id)a0;
+ (id)metalLibrary;
+ (id)metalLibraryFunctionWithName:(id)a0;
+ (unsigned long long)metalPixelFormatForPixelFormat:(unsigned int)a0 plane:(unsigned int)a1;
+ (id)metalTextureFromBuffer:(struct __CVBuffer { } *)a0 plane:(unsigned int)a1;
+ (unsigned int)preferredPixelFormatForInputFormat:(unsigned int)a0 outputColorSpace:(struct CGColorSpace { } *)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithImageBuffer:(struct __CVBuffer { } *)a0 gainMapBuffer:(struct __CVBuffer { } *)a1;

@end
