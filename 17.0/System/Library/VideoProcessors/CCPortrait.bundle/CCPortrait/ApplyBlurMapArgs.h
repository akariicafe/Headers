@class ApplyBlurMapIntermediates, NSDictionary, NSData, NSString;
@protocol MTLTexture;

@interface ApplyBlurMapArgs : NSObject

@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) NSData *metadata;
@property (nonatomic) float simulatedAperture;
@property (nonatomic) float maxBlur;
@property (nonatomic) float inputScale;
@property (nonatomic) float lumaNoiseAmplitude;
@property (retain, nonatomic) id inputBlurMap;
@property (retain, nonatomic) id inputAlpha;
@property (retain, nonatomic) id inputImage;
@property (retain, nonatomic) id inputImageLuma;
@property (retain, nonatomic) id inputImageChroma;
@property (retain, nonatomic) id inputGainMap;
@property (retain, nonatomic) id<MTLTexture> outputImageLuma;
@property (retain, nonatomic) id<MTLTexture> outputImageChroma;
@property (retain, nonatomic) ApplyBlurMapIntermediates *intermediates;
@property (retain, nonatomic) NSString *captureFolderMiscPath;

+ (id)validKeys;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)validateForCoreImage;
- (BOOL)validateForMetal;

@end
