@interface WFLinkActionBoolParameterDefinition : WFLinkActionParameterDefinition

- (id)trueDisplayName;
- (id)falseDisplayName;
- (Class)parameterClass;
- (id)parameterStateFromLinkValue:(id)a0;
- (id)initWithParameterMetadata:(id)a0;
- (id)linkValueFromParameterState:(id)a0;
- (id)linkValueWithValue:(id)a0;
- (id)localizedTitleForLinkValue:(id)a0;
- (id)parameterDefinitionDictionary;

@end
