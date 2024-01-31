@interface WFLinkActionDateParameterDefinition : WFLinkActionParameterDefinition

- (Class)parameterClass;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)dateFromStringValue:(id)a0 error:(id *)a1;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithParameterMetadata:(id)a0;
- (id)linkValueFromParameterState:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)parameterDefinitionDictionary;

@end
