@class NSString;

@interface NUPixelFormat : NSObject

@property (class, readonly, nonatomic) NUPixelFormat *RG16;
@property (class, readonly, nonatomic) NUPixelFormat *R16;
@property (class, readonly, nonatomic) NUPixelFormat *A2RGB10;
@property (class, readonly, nonatomic) NUPixelFormat *sRGB10XR;
@property (class, readonly, nonatomic) NUPixelFormat *sRGBA8;
@property (class, readonly, nonatomic) NUPixelFormat *YCC10f420;
@property (class, readonly, nonatomic) NUPixelFormat *YCC10f420p;
@property (class, readonly, nonatomic) NUPixelFormat *X2RGB10;
@property (class, readonly, nonatomic) NUPixelFormat *ARGB8;
@property (class, readonly, nonatomic) NUPixelFormat *BGRA8;
@property (class, readonly, nonatomic) NUPixelFormat *RGBA8;
@property (class, readonly, nonatomic) NUPixelFormat *RGBAf;
@property (class, readonly, nonatomic) NUPixelFormat *RGBAh;
@property (class, readonly, nonatomic) NUPixelFormat *R8;
@property (class, readonly, nonatomic) NUPixelFormat *RGBA16;

@property (readonly, nonatomic) BOOL isYCC;
@property (readonly, nonatomic) struct { long long width; long long height; } chromaSubsampling;
@property (readonly, nonatomic) long long bytesPerLuma;
@property (readonly, nonatomic) long long bytesPerChroma;
@property (readonly, nonatomic) long long bytesPerPixel;
@property (readonly, nonatomic) long long bitsPerComponent;
@property (readonly, nonatomic) int CIFormat;
@property (readonly, nonatomic) unsigned int CVPixelFormat;
@property (readonly, nonatomic) unsigned long long metalFormat;
@property (readonly, nonatomic) BOOL supportsExtendedRange;
@property (readonly, nonatomic) NSString *name;

+ (id)pixelFormatForCIFormat:(int)a0;
+ (id)pixelFormatForCVPixelFormat:(unsigned int)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)alignedRowBytesForWidth:(long long)a0;
- (BOOL)isEqualToPixelFormat:(id)a0;

@end
