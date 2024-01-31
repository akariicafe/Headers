@class ADStereoPipelineParameters;

@interface ADStereoExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADStereoPipelineParameters *pipelineParameters;

- (id)init;
- (void).cxx_destruct;
- (id)initForPipeline:(id)a0;

@end
