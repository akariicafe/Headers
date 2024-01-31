@interface WFLinkCreateEntityAction : WFLinkEntityAction

- (id)verb;
- (id)overrideDescriptionSummary;
- (id)overrideLabelsByParameter;
- (id)overrideParameterSummary;
- (Class)overrideTypeDescriptions;
- (BOOL)shouldOverrideParameterLabels;

@end
