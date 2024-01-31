@class IMDAccount;

@interface IMFindAccountProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDAccount *receivingAccount;

- (void).cxx_destruct;
- (BOOL)_isSOSWithInput:(id)a0;
- (id)initWithReceivingAccount:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
