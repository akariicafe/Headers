@interface WFLinkChangeBinarySettingAction : WFOverridableLinkAction

- (id)overrideDefaultValuesByParameter;
- (id)overrideLabelsByParameter;
- (id)overrideParameterSummary;
- (BOOL)shouldOverrideParameterLabels;

@end
