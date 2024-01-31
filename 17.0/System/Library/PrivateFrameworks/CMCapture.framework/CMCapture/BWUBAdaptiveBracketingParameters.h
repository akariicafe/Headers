@class UBProgressiveBracketingParameters, NSString, NSArray, UBProgressiveBracketingStatistics;

@interface BWUBAdaptiveBracketingParameters : NSObject <BWNoiseReductionAndFusionProcessorBracketingParameters> {
    UBProgressiveBracketingParameters *_progressiveBracketingParameters;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _adaptiveBracketingFrameParametersLock;
    NSArray *_adaptiveBracketingFrameParameters;
    BOOL _stopAdaptiveBracketing;
    Class _progressiveBracketingStatisticsClass;
    UBProgressiveBracketingStatistics *_lastProgressiveBracketingStatisticsForTotalIntegrationTimesProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)stationary;
- (id)adaptiveBracketingFrameParametersForGroup:(int)a0;
- (id)adaptiveBracketingParametersForDigitalFlashMode:(int)a0 sphereOffsetEnabled:(BOOL)a1;
- (float)evZeroTargetGain;
- (BOOL)generateWhiteBalanceParameters;
- (float)previewSNR;
- (double)totalIntegrationTime;
- (double)totalIntegrationTimeForDigitalFlashMode:(int)a0 frameStatistics:(id)a1 stationary:(BOOL)a2 detectedObjects:(id)a3;

@end
