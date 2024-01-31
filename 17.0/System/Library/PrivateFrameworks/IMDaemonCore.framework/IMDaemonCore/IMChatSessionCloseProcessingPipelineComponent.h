@class IMDMessageStore, IMDChatRegistry, IMDAccount, IMDiMessageIDSTrustedData;

@interface IMChatSessionCloseProcessingPipelineComponent : IMPipelineComponent {
    IMDAccount *_account;
    IMDMessageStore *_messageStore;
    IMDChatRegistry *_chatRegistry;
    IMDiMessageIDSTrustedData *_idsTrustedData;
}

- (id)initWithMessageStore:(id)a0;
- (void).cxx_destruct;
- (id)initWithMessageStore:(id)a0 chatRegistry:(id)a1 idsTrustedData:(id)a2;
- (id)runIndividuallyWithInput:(id)a0;

@end
