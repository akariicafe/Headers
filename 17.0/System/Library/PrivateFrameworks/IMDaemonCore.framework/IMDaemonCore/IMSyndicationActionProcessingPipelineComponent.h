@class IMDiMessagePipelineResources;

@interface IMSyndicationActionProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;

- (id)_account;
- (id)_messageStore;
- (id)_chatRegistry;
- (void).cxx_destruct;
- (id)_broadcaster;
- (id)findSMSChatForInput:(id)a0;
- (id)handleChatSyndicationAction:(id)a0 chat:(id)a1;
- (id)handleMessageSyndicationAction:(id)a0 chat:(id)a1;
- (id)initWithPipelineResources:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
