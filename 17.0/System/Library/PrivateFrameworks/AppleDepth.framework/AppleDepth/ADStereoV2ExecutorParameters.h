@class ADStereoV2PipelineParameters;

@interface ADStereoV2ExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADStereoV2PipelineParameters *pipelineParameters;
@property (nonatomic) BOOL temporalConsistencyActive;
@property (nonatomic) float temporalSmoothingCurrentFeaturesRatioMin;
@property (nonatomic) float temporalSmoothingPreviousFeaturesRatioMin;

- (void).cxx_destruct;
- (id)initForDevice:(id)a0;

@end
