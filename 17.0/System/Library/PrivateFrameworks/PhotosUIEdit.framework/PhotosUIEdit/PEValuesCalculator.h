@class PUPhotoEditImageValues, PICompositionController, NSObject, PLEditSource;
@protocol OS_dispatch_group, PEValuesCalculatorSettings, OS_dispatch_queue, PEValuesCalculatorDelegate;

@interface PEValuesCalculator : NSObject {
    PUPhotoEditImageValues *_currentImageValues;
    PUPhotoEditImageValues *_currentGeometricValues;
    PUPhotoEditImageValues *_initialImageValues;
    PUPhotoEditImageValues *_initialGeometricValues;
    PICompositionController *_compositionControllerForCurrentValues;
    NSObject<OS_dispatch_queue> *_imageValuesComputationQueue;
    NSObject<OS_dispatch_group> *_computingImageValuesGroup;
    NSObject<OS_dispatch_queue> *_geometricValuesComputationQueue;
    NSObject<OS_dispatch_group> *_computingGeometricValuesGroup;
    struct { BOOL enableEnterEditPortraitAutoCalc; BOOL enableEnterEditCropAutoCalc; BOOL enableEnterEditPerspectiveAutoCalc; BOOL enableEnterEditDepthEffectAutoCalc; BOOL enableEnterEditSmartToneAutoCalc; BOOL enableEnterEditSmartColorAutoCalc; double autoStraightenMaxAngle; double autoPerspectiveMaxYaw; double autoPerspectiveMaxPitch; double autoPerspectiveMaxAngle; double autoPerspectiveMaxFaceSize; BOOL autoPerspectiveDisableOnPanos; BOOL autoPerspectiveDisableOnFrontFacingCameraImages; } _settings;
}

@property (weak, nonatomic) id<PEValuesCalculatorDelegate> delegate;
@property (weak, nonatomic) id<PEValuesCalculatorSettings> settingsDelegate;
@property (retain, nonatomic) PLEditSource *editSource;
@property (nonatomic) BOOL skipGeometricCalculations;
@property (retain, nonatomic) PICompositionController *compositionController;
@property (readonly, nonatomic) BOOL hasImageValues;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoFrameTime;

+ (BOOL)shouldRunGeometricAutoCalculatorForSource:(id)a0;

- (id)init;
- (void)_updateSettings;
- (void)invalidate;
- (void).cxx_destruct;
- (id)apertureValuesWithAccuracy:(long long)a0;
- (id)autoCropValuesWithAccuracy:(long long)a0;
- (id)autoPerspectiveValuesWithAccuracy:(long long)a0;
- (id)currentEditSource;
- (id)portraitValuesWithAccuracy:(long long)a0;
- (void)precomputeGeometricValues;
- (void)precomputeImageValues;
- (void)precomputeImageValuesWithCompletion:(id /* block */)a0;
- (void)updateAdjustmentSmartToneStatistics:(id)a0 withAccuracy:(long long)a1;
- (BOOL)_imageCurrentValuesCacheIsValid;
- (void)_ensureCurrentGeometricValuesAreComputed;
- (void)_ensureCurrentImageValuesAreComputed;
- (void)_ensureInitialGeometricValuesAreComputed;
- (void)_ensureInitialImageValuesAreComputed;
- (BOOL)_geometricCurrentValuesCacheIsValid;
- (void)computeAutoEnhanceWithCompletionHandler:(id /* block */)a0;
- (void)precomputeImageValuesWithOptionalCompletion:(id /* block */)a0;
- (double)smartColorAutoSuggestion;
- (id)smartColorStatisticsWithAccuracy:(long long)a0;
- (double)smartToneAutoSuggestion;
- (id)smartToneStatisticsWithAccuracy:(long long)a0;

@end
