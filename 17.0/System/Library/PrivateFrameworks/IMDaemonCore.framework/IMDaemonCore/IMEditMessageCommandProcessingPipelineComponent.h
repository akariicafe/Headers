@class IMDiMessagePipelineResources;

@interface IMEditMessageCommandProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;

- (id)_account;
- (id)_messageStore;
- (void).cxx_destruct;
- (long long)_messageEditHistoryLimit;
- (id)_idsAccount;
- (double)_messageRetractionReceivedTimeoutEnforcingExactTimeoutInterval:(BOOL)a0;
- (id)_applyEditsToMessage:(id)a0 preEditFullMessageText:(id)a1 editType:(unsigned long long)a2 editedPartIndex:(long long)a3 editedMessagePartText:(id)a4 shouldRetractSubject:(BOOL)a5 editTimestamp:(id)a6 chat:(id)a7 updatedAssociatedMessageItems:(id *)a8;
- (double)_messageEditReceivedTimeout;
- (double)_timeoutIntervalForEditType:(unsigned long long)a0 enforceExactRetractionTimeoutInterval:(BOOL)a1;
- (id)initWithPipelineResources:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
