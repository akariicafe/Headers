@class ADJasperColorInFieldCalibrationPipelineParameters;

@interface ADJasperColorInFieldCalibrationExecutorParameters : ADExecutorParameters

@property (nonatomic) BOOL reportTelemetry;
@property (readonly, retain, nonatomic) ADJasperColorInFieldCalibrationPipelineParameters *pipelineParameters;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPipelineParameters:(id)a0;

@end
