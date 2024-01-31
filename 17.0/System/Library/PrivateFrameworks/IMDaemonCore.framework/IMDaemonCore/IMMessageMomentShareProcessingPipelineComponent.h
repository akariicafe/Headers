@class IMDiMessageIDSTrustedData;

@interface IMMessageMomentShareProcessingPipelineComponent : IMPipelineComponent

@property (retain, nonatomic) IMDiMessageIDSTrustedData *trustedData;

- (void).cxx_destruct;
- (id)initWithTrustedData:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
