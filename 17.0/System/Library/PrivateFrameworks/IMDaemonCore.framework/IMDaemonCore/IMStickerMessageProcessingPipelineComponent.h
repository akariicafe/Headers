@class IMDiMessagePipelineResources, NSDictionary;

@interface IMStickerMessageProcessingPipelineComponent : IMAssociatedMessageProcessingPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;
@property (retain, nonatomic) NSDictionary *messageSummaryAdditions;

- (void).cxx_destruct;
- (id)createMessageItemWithInput:(id)a0;
- (id)initWithPipelineResources:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
