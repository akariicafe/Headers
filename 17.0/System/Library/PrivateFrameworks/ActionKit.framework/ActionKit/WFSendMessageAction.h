@interface WFSendMessageAction : WFHandleSystemIntentAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (BOOL)skipsProcessingHiddenParameters;
- (id)actionForAppIdentifier:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)generatedResourceNodes;
- (void)initializeParameters;
- (id)localizedKeyParameterDisplayName;
- (id)minimumSupportedClientVersion;
- (BOOL)opensInApp;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (void)selectedAppDidChange;
- (BOOL)shouldForceHandleInSiri:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (BOOL)isPhotoOrVideo:(id)a0;
- (BOOL)canSendAttachmentsWithIntentHandler:(id)a0 runningInSiri:(BOOL)a1 showWhenRun:(BOOL)a2;
- (void)getContentFromInput:(id)a0 completionHandler:(id /* block */)a1;
- (void)getINMessageAttachmentsFromInput:(id)a0 completionHandler:(id /* block */)a1;
- (void)getRecipients:(id /* block */)a0;
- (BOOL)isMessagesAppSelected;
- (id)recipientsParameter;

@end
