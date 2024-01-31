@interface IMDeferReplicatedMessagePipelineComponent : IMPipelineComponent

@property (nonatomic) BOOL skipDeferral;

- (BOOL)_shouldDeferDeliveryWithInput:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
