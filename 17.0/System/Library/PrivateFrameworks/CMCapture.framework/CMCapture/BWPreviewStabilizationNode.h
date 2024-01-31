@class NSString, NSDictionary, BWRamp, BWPreviewGyroStabilization;

@interface BWPreviewStabilizationNode : BWNode {
    BWPreviewGyroStabilization *_previewStabilization;
    NSDictionary *_staticParametersByPortType;
    BOOL _updateFinalCropRectWithStabilizationShift;
    BOOL _stabilizeFallbackCamera;
    BOOL _enableStabilizationTransitionRamps;
    BWRamp *_stabilizationTransitionRamp;
    BWRamp *_stabilizationCameraFallbackRamp;
    BOOL _stabilizationCameraFallbackRampEnabled;
    int _stabilizationEnterRampFrameCount;
    int _stabilizationExitRampFrameCount;
    int _stabilizationCameraFallbackRampFrameCount;
    int _lastRecommendedMasterSelectionReason;
    NSString *_lastRecommendedMasterPortType;
    NSString *_lastPortType;
    BOOL _lastStabilizingEnabled;
    struct CGPoint { double x; double y; } _appliedTranslation;
    struct CGPoint { double x; double y; } _lastTranslationBeforeCameraFallbackRampStart;
    BOOL _isStillImagePreview;
}

+ (void)initialize;

- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeSubType;
- (id)initWithCameraInfoByPortType:(id)a0 forStillImagePreview:(BOOL)a1 updateFinalCropRectWithStabilizationShift:(BOOL)a2;

@end
