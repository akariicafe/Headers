@class NSDictionary, NSString;
@protocol MTLTexture;

@interface LTMIBPParams : NSObject <LTMIBPParams>

@property (nonatomic) unsigned short ispDGainThreshold;
@property (nonatomic) BOOL computeHDRCurves;
@property (nonatomic) BOOL computeCurvesWoFaceBoost;
@property (nonatomic) BOOL forceDisableLTMFaceExposureRatio;
@property (nonatomic) BOOL forceDisableLTMFaceBoost;
@property (nonatomic) BOOL forceDisableHR;
@property (nonatomic) BOOL enableAntiAliasing;
@property (nonatomic) BOOL enableHighlightCompression;
@property (retain, nonatomic) NSDictionary *validBufferRect;
@property (nonatomic) int optimizationLevel;
@property (nonatomic) BOOL calcGlobalHistOnROI;
@property (nonatomic) BOOL digitalFlash;
@property (retain, nonatomic) NSDictionary *inMetaData;
@property (retain, nonatomic) id<MTLTexture> inRGBImageUInt16Tex;
@property (retain, nonatomic) id<MTLTexture> inLumaTex;
@property (retain, nonatomic) id<MTLTexture> inChromaTex;
@property (retain, nonatomic) id<MTLTexture> inRGBAFloatTex;
@property (retain, nonatomic) NSDictionary *outMetaData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reset;
- (void).cxx_destruct;

@end
