@class NSDictionary, PTTexture;
@protocol PTRenderState, MTLTexture;

@interface PTRenderRequest : NSObject <NSCopying>

@property (retain, nonatomic) id<PTRenderState> renderState;
@property (retain, nonatomic) PTTexture *sourceColor;
@property (retain, nonatomic) id<MTLTexture> sourceDisparity;
@property (retain, nonatomic) PTTexture *destinationColor;
@property (nonatomic) float focusDisparity;
@property (nonatomic) float fNumber;
@property (nonatomic) float focalLenIn35mmFilm;
@property (nonatomic) int sensorID;
@property (nonatomic) void /* unknown type, empty encoding */ visCropFactor;
@property (nonatomic) void /* unknown type, empty encoding */ visCropFactorPreview;
@property (nonatomic) struct CGSize { double width; double height; } totalSensorCropRectSize;
@property (nonatomic) int AGC;
@property (nonatomic) int conversionGain;
@property (nonatomic) int readNoise_1x;
@property (nonatomic) int readNoise_8x;
@property (nonatomic) unsigned int frameId;
@property (nonatomic) float networkBias;
@property (nonatomic) float alphaLowLight;
@property (nonatomic) float disparityMin;
@property (nonatomic) float disparityMax;
@property (nonatomic) float highlightChromaFactor;
@property (nonatomic) float highlightBoostFactor;
@property (nonatomic) float aperture;
@property (nonatomic) float focusDistance;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long width; unsigned long long height; } scissorRect;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
