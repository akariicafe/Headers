@class ADPearlColorInFieldCalibrationPipelineParameters;

@interface ADPearlColorInFieldCalibrationExecutorParameters : ADExecutorParameters

@property (nonatomic) BOOL reportTelemetry;
@property (readonly, retain, nonatomic) ADPearlColorInFieldCalibrationPipelineParameters *pipelineParameters;

- (id)init;
- (void).cxx_destruct;
- (id)initForPipeline:(id)a0;
- (id)initWithPipelineParameters:(id)a0;

@end
