@class IMDAccount;

@interface IMCheckInMessageProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDAccount *account;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)_getURL:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
