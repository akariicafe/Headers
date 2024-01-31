@class NSString;

@interface ASVTextureDescription : NSObject

@property (readonly, nonatomic) void /* unknown type, empty encoding */ originalSize;
@property (readonly, nonatomic) struct { long long colorModel; long long pixelEncoding; } originalPixelFormat;
@property (nonatomic) long long downsamplingFactor;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ destinationSize;
@property (readonly, nonatomic) struct { long long colorModel; long long pixelEncoding; } destinationPixelFormat;
@property (readonly, nonatomic) long long fileType;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) BOOL generateMipmaps;
@property (readonly, nonatomic) BOOL requiresDownsampling;

+ (unsigned long long)bytesPerComponentForColorModel:(long long)a0;
+ (unsigned long long)bytesPerComponentForPixelEncoding:(long long)a0;
+ (unsigned long long)bytesPerPixelForPixelFormat:(struct { long long x0; long long x1; })a0;
+ (long long)pixelEncodingForBitsPerComponent:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithName:(id)a0 destinationPixelFormat:(struct { long long x0; long long x1; })a1 imageProperties:(struct __CFDictionary { } *)a2 fileType:(struct __CFString { } *)a3 generateMipmaps:(BOOL)a4;
- (id)initWithName:(SEL)a0 originalSize:(id)a1 originalPixelFormat:(struct { long long x0; long long x1; })a2 destinationPixelFormat:(struct { long long x0; long long x1; })a3 downsamplingFactor:(long long)a4 fileType:(long long)a5 generateMipmaps:(BOOL)a6;

@end
