@class IMDiMessageIDSTrustedData, IDSService;

@interface IMMessageLegacyProcessingPipelineComponent : IMPipelineComponent {
    IMDiMessageIDSTrustedData *_idsTrustedData;
    id _messageContext;
    IDSService *_idsService;
}

- (void).cxx_destruct;
- (BOOL)_shouldUpgradeExistingMessage:(id)a0 input:(id)a1;
- (void)_updateChatForInput:(id)a0 hadChat:(BOOL)a1;
- (id)initWithIDSTrustedData:(id)a0 messageContext:(id)a1 idsService:(id)a2;
- (id)runIndividuallyWithInput:(id)a0;

@end
