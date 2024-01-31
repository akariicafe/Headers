@interface IMTypingIndicatorProcessingPipelineComponent : IMTextMessageProcessingPipelineComponent

- (BOOL)canSuppressMessageWithInput:(id)a0;
- (id)createMessageItemWithInput:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
