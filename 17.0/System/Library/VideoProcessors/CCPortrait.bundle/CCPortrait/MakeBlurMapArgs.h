@class NSArray, NSDictionary, NSData, MakeBlurMapIntermediates, NSString;
@protocol MTLTexture;

@interface MakeBlurMapArgs : NSObject

@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) NSData *metadata;
@property (nonatomic) float simulatedAperture;
@property (nonatomic) float focalLengthInPixels;
@property (nonatomic) float normalizedFocalLength;
@property (nonatomic) float maxBlur;
@property (nonatomic) float inputScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } focusWindow;
@property (retain, nonatomic) NSArray *facePoints;
@property (retain, nonatomic) id inputImage;
@property (retain, nonatomic) id inputImageLuma;
@property (retain, nonatomic) id inputImageChroma;
@property (retain, nonatomic) id inputShiftMap;
@property (retain, nonatomic) id inputSegmentation;
@property (retain, nonatomic) id inputHair;
@property (retain, nonatomic) id inputGlasses;
@property (retain, nonatomic) id inputGainMap;
@property (retain, nonatomic) id<MTLTexture> outputBlurMap;
@property (retain, nonatomic) MakeBlurMapIntermediates *intermediates;
@property (retain, nonatomic) NSString *captureFolderMiscPath;

+ (id)validKeys;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)validateForCoreImage;
- (BOOL)validateForMetal;

@end
