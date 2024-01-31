@interface IMResolveFallbackHashesProcessingPipelineComponent : IMPipelineComponent

- (id)_associatedMessageGUIDForInput:(id)a0 error:(id *)a1;
- (id)_messageGUIDForInput:(id)a0 providedGUID:(id)a1 fallbackHash:(id)a2;
- (id)_messageGUIDForMessageWithFallbackHash:(id)a0 chat:(id)a1;
- (id)_threadIdentifierForInput:(id)a0 error:(id *)a1;
- (id)runIndividuallyWithInput:(id)a0;

@end
