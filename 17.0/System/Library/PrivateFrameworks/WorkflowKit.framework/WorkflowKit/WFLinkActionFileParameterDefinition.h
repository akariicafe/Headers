@class NSArray;

@interface WFLinkActionFileParameterDefinition : WFLinkActionParameterDefinition

@property (readonly, nonatomic) NSArray *supportedUTIs;

- (Class)parameterClass;
- (id)parameterStateFromLinkValue:(id)a0;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id)a1 permissionRequestor:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithParameterMetadata:(id)a0;
- (id)linkValueFromParameterState:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)parameterDefinitionDictionary;

@end
