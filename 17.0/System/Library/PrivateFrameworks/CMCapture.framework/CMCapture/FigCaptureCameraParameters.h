@class NSDictionary;

@interface FigCaptureCameraParameters : NSObject {
    NSDictionary *_commonDistortionCorrectionParameters;
    NSDictionary *_meteorParameters;
    NSDictionary *_stereoDisparityParameters;
    NSDictionary *_depthProcessingParameters;
    NSDictionary *_landmarksParameters;
    NSDictionary *_commonMattingParameters;
    NSDictionary *_learnedMattingParameters;
    NSDictionary *_personSemanticsParameters;
    NSDictionary *_coreImagePortraitFilterParameters;
    NSDictionary *_commonDeepZoomParameters;
    NSDictionary *_portraitSceneMonitoringParametersByZoomFactor;
}

@property (readonly, nonatomic) int meteorHeadroomProcessingType;
@property (readonly, nonatomic) NSDictionary *cameraParameters;
@property (readonly, nonatomic) NSDictionary *cameraTuningParameters;
@property (readonly, nonatomic) NSDictionary *motionAttachmentsParameters;
@property (readonly, nonatomic) NSDictionary *videoStabilizationParameters;
@property (readonly, nonatomic) NSDictionary *videoStabilizationSTFParameters;
@property (readonly, nonatomic) NSDictionary *stereoDisparityParameters;
@property (readonly, nonatomic) NSDictionary *commonNRFParameters;
@property (readonly, nonatomic) int nrfVersion;
@property (readonly, nonatomic) int gainMapVersion;
@property (readonly, nonatomic) int distortionCorrectionVersion;
@property (readonly, nonatomic) NSDictionary *commonVideoGreenGhostMitigationParameters;
@property (readonly, nonatomic) int videoGreenGhostBrightLightMitigationVersion;
@property (readonly, nonatomic) int videoGreenGhostLowLightMitigationVersion;
@property (readonly, nonatomic) NSDictionary *photoEncoderParameters;
@property (readonly, nonatomic) NSDictionary *temporalNoiseReductionParameters;
@property (readonly, nonatomic) int deepZoomVersion;

+ (id)sharedInstance;
+ (int)stillImageMaxLossyCompressionLevel;
+ (id)sensorIDStringFromMetadata:(id)a0;
+ (id)sdofTuningParametersForSensorIDDictionary:(id)a0 zoomFactor:(float)a1;
+ (int)videoDataMaxLossyCompressionLevel;
+ (id)sensorIDStringFromModuleInfo:(id)a0;
+ (void)initialize;
+ (int)previewMaxLossyCompressionLevel;
+ (int)movieFileMaxLossyCompressionLevelForPixelFormat:(unsigned int)a0;
+ (unsigned int)sensorIDFromSensorIDString:(id)a0;

- (id)init;
- (int)disparityRefinementTypeForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (id)portraitSceneMonitoringParametersForPortType:(id)a0 sensorIDString:(id)a1 zoomFactorRelativeToWidePortType:(float)a2;
- (void)dealloc;
- (int)mattingVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (int)fsdNetStereoImagesAlignmentForPortType:(id)a0 sensorIDString:(id)a1;
- (id)initWithContentsOfFile:(id)a0;
- (id)actionCameraSceneMonitoringParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (unsigned int)landmarksConstellationPointCountForInferenceType:(int)a0;
- (int)portraitSceneMonitorVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (BOOL)panoramaRequiresLTMLockingForPortType:(id)a0 sensorIDString:(id)a1;
- (int)disparityVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (BOOL)complementMatteSuppressionDecisionWithISPDetectedFaces;
- (int)disparityVersion;
- (int)personSemanticsVersion;
- (id)quadraSubPixelSwitchingParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (BOOL)chromaticDefringingEnabledForSlomoForPortType:(id)a0 sensorIDString:(id)a1;
- (id)sensorIDDictionaryForPortType:(id)a0 sensorIDString:(id)a1;
- (int)sdofRenderingVersionForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (int)coreImagePortraitFilterVersion;
- (BOOL)deepZoomProWithZoomedImageEnabledForPortType:(id)a0 sensorIDString:(id)a1;
- (id)chromaticDefringingParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (BOOL)portraitPreviewForegroundBlurEnabledForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (int)videoStabilizationProcessorVersion;
- (struct { unsigned short x0; unsigned short x1; unsigned short x2; })landmarksVersionForInferenceType:(int)a0;
- (id)sensorIDDictionaryForStream:(id)a0;
- (id)initWithModelSpecificName:(id)a0;
- (int)focusPixelDisparityVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (int)depthProcessorVersion;
- (int)learnedMattingVersion;
- (int)mattingVersion;
- (id)focalLengthCharacterizationForStream:(id)a0;
- (BOOL)chromaticDefringingEnabledForVideoForPortType:(id)a0 sensorIDString:(id)a1;

@end
