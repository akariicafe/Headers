@class BWPixelTransferNode, FigCaptureSemanticStyle, NSDictionary, BWPreviewStitcherNode, BWPreviewStabilizationNode, NSObject, BWPreviewTimeMachineSinkNode, BWVideoPIPOverlayNode, BWVideoDepthNode, NSString, BWImageQueueSinkNode, BWStreamingFilterNode, BWSceneClassifierSinkNode, NSArray, BWNodeOutput, BWInferenceNode;
@protocol BWSemanticStyleSceneObserver, BWMRCSceneObserver, OS_dispatch_queue;

@interface FigCapturePreviewSinkPipeline : FigCaptureSinkPipeline {
    BWSceneClassifierSinkNode *_sceneClassifierSinkNode;
    BWVideoPIPOverlayNode *_zoomPIPOverlayNode;
    BWNodeOutput *_sceneClassifierPipelineUpstreamOutput;
    BWInferenceNode *_semanticStylePersonSegmentationNode;
    BWPreviewStabilizationNode *_previewStabilizationNode;
    BWPreviewStitcherNode *_previewStitcher;
    BOOL _cinematicVideoEnabled;
    BOOL _overCaptureEnabled;
    double _videoStabilizationOverscan;
    long long _primaryCaptureRectUniqueID;
    BOOL _applyPreviewShiftToMomentCapture;
    BWVideoDepthNode *_videoDepthNode;
    BWInferenceNode *_opticalFlowInferenceNode;
    NSObject<OS_dispatch_queue> *_metalSubmissionAndCompletionQueue;
}

@property (nonatomic, setter=setMRCSceneObserver:) id<BWMRCSceneObserver> mrcSceneObserver;
@property (readonly, nonatomic) id<BWSemanticStyleSceneObserver> semanticStyleSceneObserver;
@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) int sourceDeviceType;
@property (readonly, nonatomic) BWImageQueueSinkNode *imageQueueSinkNode;
@property (readonly, nonatomic) BWStreamingFilterNode *filterNode;
@property (readonly, nonatomic) BWPixelTransferNode *scalerNode;
@property (readonly, nonatomic) BWPreviewTimeMachineSinkNode *timeMachineSinkNode;
@property (readonly, nonatomic) BWNodeOutput *metadataSinkOutput;
@property (readonly, nonatomic) BWNodeOutput *videoThumbnailSinkOutput;
@property (readonly, nonatomic) BWNodeOutput *depthDataSinkOutput;
@property (readonly, nonatomic) NSDictionary *imageQueueUpdatedPayloadToBeSentAfterCommitConfiguration;
@property (readonly, nonatomic) BOOL depthFilterRenderingEnabled;
@property (readonly, nonatomic) struct FigCaptureVideoTransform { BOOL mirrored; int rotationDegrees; struct { int width; int height; } dimensions; } outputTransform;
@property (readonly, nonatomic) struct FigCaptureVideoTransform { BOOL mirrored; int rotationDegrees; struct { int width; int height; } dimensions; } videoThumbnailSinkOutputTransform;
@property (nonatomic) BOOL discardsImageQueueSampleData;
@property (nonatomic) BOOL sceneClassifierSuspended;
@property (retain, nonatomic) NSArray *filters;
@property (nonatomic) float simulatedAperture;
@property (nonatomic) float portraitLightingEffectStrength;
@property (retain, nonatomic) FigCaptureSemanticStyle *semanticStyle;
@property (readonly) double primaryCaptureRectAspectRatio;
@property (readonly) struct CGPoint { double x0; double x1; } primaryCaptureRectCenter;
@property (readonly) long long primaryCaptureRectUniqueID;
@property BOOL displaysWidestCameraOnly;

+ (void)initialize;

- (void)dealloc;
- (void)setSemanticStyleSet:(id)a0 fencePortSendRight:(id)a1;
- (void)prepareForRenderingWithPreparedPixelBufferPool;
- (void)setSemanticStyle:(id)a0 animated:(BOOL)a1;
- (void)setSemanticStyleRenderingSuspended:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithConfiguration:(id)a0 sourcePreviewOutput:(id)a1 sourceSemanticMasksOutput:(id)a2 imageQueueSinkNode:(id)a3 graph:(id)a4 name:(id)a5 inferenceScheduler:(id)a6 captureDevice:(id)a7 previewTapDelegate:(id)a8 zoomPIPOverlayDelegate:(id)a9;
- (void)setPreviewTapRegistered:(BOOL)a0;
- (void)setPrimaryCaptureRectAspectRatio:(double)a0 center:(struct CGPoint { double x0; double x1; })a1 fencePortSendRight:(id)a2 uniqueID:(long long)a3;
- (void)setStoppingForModeSwitch:(BOOL)a0;
- (void)setVideoStabilizationOverscanCropEnabled:(BOOL)a0 momentMovieRecordingEnabled:(BOOL)a1;

@end
