@class IMDAccount, IMDChatRegistry;

@interface IMFindChatProcessingPipelineComponent : IMPipelineComponent {
    IMDChatRegistry *_chatRegistry;
    IMDAccount *_account;
}

+ (id)findGroupChatWithFromIdentifier:(id)a0 toIdentifier:(id)a1 groupName:(id)a2 participants:(id)a3 groupID:(id)a4 serviceName:(id)a5 chatRegistry:(id)a6;

- (void).cxx_destruct;
- (BOOL)_participantsContainBizID:(id)a0;
- (BOOL)_shouldDropMessageGroupID:(id)a0 participants:(id)a1 fromIdentifier:(id)a2 toIdentifier:(id)a3;
- (id)initWithChatRegistry:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;
- (BOOL)shouldDropDueToGroupSize:(id)a0;

@end
