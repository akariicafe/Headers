@class IMDiMessageIDSTrustedData;

@interface IMJunkMessageProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessageIDSTrustedData *idsTrustedData;

- (void).cxx_destruct;
- (void)_trackSendEventForSender:(id)a0 andReceiver:(id)a1;
- (id)initWithIDSTrustedData:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
