@class NUColorSpace, NUPixelFormat, NSString;
@protocol NURegionPolicy, NUExtentPolicy, NUMutableImage, NUScalePolicy;

@interface NUImageRenderRequest : NURenderRequest <NUTimeBased>

@property (retain) id<NUMutableImage> targetImage;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (nonatomic) double maxEDRHeadroom;
@property (nonatomic) double currentEDRHeadroom;
@property (retain, nonatomic) id<NURegionPolicy> regionPolicy;
@property (retain, nonatomic) id<NUScalePolicy> scalePolicy;
@property (retain, nonatomic) id<NUExtentPolicy> extentPolicy;
@property (retain, nonatomic) NUPixelFormat *pixelFormat;
@property (nonatomic) struct { long long width; long long height; } tileSize;
@property (nonatomic) struct { long long width; long long height; } borderSize;
@property (nonatomic) long long auxiliaryImageType;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)mediaComponentType;

@end
