@class NSUserDefaults;

@interface PKHoverSettings : NSObject {
    NSUserDefaults *_pencilDefaults;
    BOOL _didAddObserver;
}

@property (class, readonly, nonatomic) BOOL isHoverActive;
@property (class, readonly, nonatomic) BOOL isHoverEnabled;
@property (class, readonly, nonatomic) BOOL allowDoubleTapOnlyWithPencilHover;
@property (class, readonly, nonatomic) double maxHoverHeight;
@property (class, readonly, nonatomic) BOOL isHoverAnglesActive;
@property (class, readonly, nonatomic) BOOL isHoverShadowActive;

@property (nonatomic) BOOL increasedContrastEnabled;
@property (nonatomic) BOOL showDebugLayer;
@property (nonatomic) BOOL supportTouchPad;
@property (nonatomic) long long debugCursorType;
@property (nonatomic) BOOL tooltipsActive;
@property (nonatomic) BOOL snapToShapeActive;
@property (nonatomic) BOOL toolPreviewActive;
@property (nonatomic) double erasePreviewAlphaFactor;
@property (nonatomic) BOOL toolIndicatorActive;
@property (nonatomic) BOOL avoidSwitchingToolsOutsideHoverRange;
@property (nonatomic) BOOL toolShadowActive;
@property (nonatomic) BOOL toolShadowActiveWhileDrawing;
@property (nonatomic) BOOL toolShadowActiveOutsideNotes;
@property (nonatomic) BOOL toolShadowRenderInMetal;
@property (readonly, nonatomic) double toolShadowMaxOpacity;
@property (nonatomic) double toolShadowMaxOpacityNormal;
@property (nonatomic) double toolShadowMaxOpacityForIncreasedContrast;
@property (readonly, nonatomic) double toolShadowMaxOpacityInDrawingCanvas;
@property (nonatomic) double toolShadowMaxOpacityInDrawingCanvasNormal;
@property (nonatomic) double toolShadowMaxOpacityInDrawingCanvasForIncreasedContrast;
@property (nonatomic) double toolShadowMaxBlurRadius;
@property (nonatomic) double toolShadowMovementSpeedHideThreshold;
@property (nonatomic) double toolShadowFadeInDistance;
@property (nonatomic) BOOL toolPreviewShouldWaitForHoverAndHold;
@property (nonatomic) BOOL toolSwitchIndicatorActive;
@property (nonatomic) double screenEdgeSizeInMillimeters;
@property (nonatomic) double maxZDistance;
@property (nonatomic) double toolPreviewMaxZDistance;
@property (nonatomic) double toolPreviewFadeOutDistance;
@property (nonatomic) double toolPreviewAzimuthTiltMaxZDistance;
@property (nonatomic) double deactivateExtraDistance;
@property (nonatomic) double predictionTimeInterval;
@property (nonatomic) double hoverAndHoldTriggerTimeInterval;
@property (nonatomic) double hoverAndHoldActionTimeInterval;
@property (nonatomic) unsigned long long numFramesExtraLatency;
@property (nonatomic) unsigned long long numFramesReduceFramerate;
@property (nonatomic) double weightedAverageAltitudeFactor;
@property (nonatomic) double weightedAverageAzimuthFactor;
@property (nonatomic) double weightedAverageLocationFactor;
@property (nonatomic) BOOL scribbleFocusActive;
@property (nonatomic) BOOL scribbleFlashCursorActive;
@property (nonatomic) BOOL scribbleShowWritableElementsActive;
@property (nonatomic) BOOL scribbleHoverStrongActive;
@property (nonatomic) BOOL scribbleCommitOnLift;
@property (nonatomic) BOOL scribbleLineBreakHandling;
@property (nonatomic) BOOL scribbleLineBreakMultiLineEnabled;
@property (nonatomic) int scribbleLineBreakMultiLineMaxLines;
@property (nonatomic) double scribbleLineBreakMultiLineDelay;
@property (nonatomic) BOOL scribbleIBeamActive;
@property (nonatomic) double azimuthJitterNoise;
@property (nonatomic) double altitudeJitterNoise;
@property (nonatomic) double azimuthOffsetNoise;
@property (nonatomic) double altitudeOffsetNoise;
@property (nonatomic) BOOL noiseIsHeightBased;
@property (nonatomic) int azimuthBuckets;
@property (nonatomic) int altitudeBuckets;
@property (nonatomic) BOOL systemShadow;

+ (id)sharedSettings;
+ (void)checkIfHoverIsSupported:(id /* block */)a0;
+ (id)keyPathsForValuesAffectingToolShadowMaxOpacity;
+ (id)keyPathsForValuesAffectingToolShadowMaxOpacityInDrawingCanvas;
+ (void)prewarmIfNecessary;

- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_darkerSystemColorsStatusDidChange:(id)a0;
- (void)_loadDefaultValues;
- (void)_scheduledSaveSettingsTriggered;
- (void)_scheduleSavingSettingsSoon;
- (BOOL)_shouldSaveSettings;
- (void)loadSettingsFromDictionary:(id)a0;
- (void)loadSettingsFromUserDefaults;
- (void)resetToDefaultValues;
- (void)saveSettingsToUserDefaults;
- (id)settingsDictionaryRepresentation;

@end
