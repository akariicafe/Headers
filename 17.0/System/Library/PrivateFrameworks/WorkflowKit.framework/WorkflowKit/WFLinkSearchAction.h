@interface WFLinkSearchAction : WFOverridableLinkAction

- (id)overrideDescriptionSummary;
- (id)overrideLabelsByParameter;
- (id)overrideName;
- (id)overrideParameterSummary;
- (id)parameterOverrides;
- (BOOL)shouldOverrideName;
- (BOOL)shouldOverrideParameterLabels;

@end
