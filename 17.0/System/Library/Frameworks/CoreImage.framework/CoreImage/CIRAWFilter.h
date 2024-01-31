@class NSData, NSString, NSArray, NSURL, CIRAWFilterImpl, CIFilter, NSDictionary, CIImage;

@interface CIRAWFilter : CIFilter

@property (class, readonly) NSArray *supportedCameraModels;

@property (retain) CIRAWFilterImpl *filterImplementation;
@property (readonly) NSURL *imageURL;
@property (readonly) NSData *imageData;
@property (readonly) NSString *imageDataHint;
@property (readonly) NSArray *supportedDecoderVersions;
@property (readonly) struct CGSize { double x0; double x1; } nativeSize;
@property (readonly) NSDictionary *properties;
@property unsigned int orientation;
@property (getter=isDraftModeEnabled) BOOL draftModeEnabled;
@property (retain) NSString *decoderVersion;
@property float scaleFactor;
@property float exposure;
@property float baselineExposure;
@property float shadowBias;
@property float boostAmount;
@property float boostShadowAmount;
@property (getter=isGamutMappingEnabled) BOOL gamutMappingEnabled;
@property (readonly, getter=isLensCorrectionSupported) BOOL lensCorrectionSupported;
@property (getter=isLensCorrectionEnabled) BOOL lensCorrectionEnabled;
@property (readonly, getter=isLuminanceNoiseReductionSupported) BOOL luminanceNoiseReductionSupported;
@property float luminanceNoiseReductionAmount;
@property (readonly, getter=isColorNoiseReductionSupported) BOOL colorNoiseReductionSupported;
@property float colorNoiseReductionAmount;
@property (readonly, getter=isSharpnessSupported) BOOL sharpnessSupported;
@property float sharpnessAmount;
@property (readonly, getter=isContrastSupported) BOOL contrastSupported;
@property float contrastAmount;
@property (readonly, getter=isDetailSupported) BOOL detailSupported;
@property float detailAmount;
@property (readonly, getter=isMoireReductionSupported) BOOL moireReductionSupported;
@property float moireReductionAmount;
@property (readonly, getter=isLocalToneMapSupported) BOOL localToneMapSupported;
@property float localToneMapAmount;
@property float extendedDynamicRangeAmount;
@property struct CGPoint { double x0; double x1; } neutralChromaticity;
@property struct CGPoint { double x0; double x1; } neutralLocation;
@property float neutralTemperature;
@property float neutralTint;
@property (retain) CIFilter *linearSpaceFilter;
@property (readonly) CIImage *previewImage;
@property (readonly) CIImage *portraitEffectsMatte;
@property (readonly) CIImage *semanticSegmentationSkinMatte;
@property (readonly) CIImage *semanticSegmentationHairMatte;
@property (readonly) CIImage *semanticSegmentationGlassesMatte;
@property (readonly) CIImage *semanticSegmentationSkyMatte;
@property (readonly) CIImage *semanticSegmentationTeethMatte;

+ (id)customAttributes;
+ (id)filterWithCVPixelBuffer:(struct __CVBuffer { } *)a0 properties:(id)a1;
+ (id)filterWithImageData:(id)a0 identifierHint:(id)a1;
+ (id)filterWithImageURL:(id)a0;

- (id)initWithImageURL:(id)a0;
- (void)dealloc;
- (id)attributes;
- (id)outputImage;
- (id)auxImageWithKey:(id)a0;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 properties:(id)a1;
- (id)initWithImageData:(id)a0 identifierHint:(id)a1;

@end
