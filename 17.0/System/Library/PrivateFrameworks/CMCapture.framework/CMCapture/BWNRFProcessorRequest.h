@class BWNRFProcessorInput, NRFUBFusionOutput, NRFRawNightModeOutputFrame, NRFDeepFusionOutput;
@protocol BWNRFProcessorControllerDelegate;

@interface BWNRFProcessorRequest : NSObject {
    BOOL _processErrorRecoveryFrame;
    BOOL _processOriginalImage;
    BOOL _processToneMapping;
    BOOL _processInferenceInputImage;
    int _clientBracketSequenceNumber;
    BOOL _processSemanticRendering;
    BOOL _provideInferenceInputImageForProcessing;
    BOOL _inferencesAvailable;
    id<BWNRFProcessorControllerDelegate> _delegate;
}

@property (readonly, nonatomic) BWNRFProcessorInput *input;
@property (readonly, nonatomic) NRFUBFusionOutput *output;
@property (readonly, nonatomic) NRFRawNightModeOutputFrame *rawNightModeOutputFrame;
@property (readonly, nonatomic) NRFDeepFusionOutput *deepFusionOutput;
@property (readonly, nonatomic) BOOL processSemanticRendering;
@property (readonly, nonatomic) BOOL provideInferenceInputImageForProcessing;
@property (readonly, nonatomic) BOOL inferencesAvailable;
@property (nonatomic) int err;
@property (nonatomic) int demosaicedRawErr;
@property (nonatomic) int numberOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float totalExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float minExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) float maxExposureTimesOfFramesAddedForMultiFrameProcessing;
@property (nonatomic) BOOL deliveredDeferredProxyImage;
@property (nonatomic) BOOL deliveredAdaptiveBracketingErrorRecoveryFrame;
@property (nonatomic) BOOL gainMapEnabled;

- (void)dealloc;
- (id)description;

@end
