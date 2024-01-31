@class IMDiMessagePipelineResources;

@interface IMPlayedReceiptProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;

- (id)_account;
- (id)_messageStore;
- (void).cxx_destruct;
- (id)_idsAccount;
- (void)_markMessageAsPlayedAndNotify:(id)a0 session:(id)a1 chat:(id)a2 date:(id)a3;
- (id)initWithPipelineResources:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
