@class IMDiMessageIDSTrustedData;

@interface IMConvergeGroupProcessingPipelineComponent : IMPipelineComponent {
    IMDiMessageIDSTrustedData *_idsTrustedData;
}

- (void).cxx_destruct;
- (id)initWithIDSTrustedData:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
