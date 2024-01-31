@interface WFCreateNoteAction : WFLinkCreateEntityAction

+ (id)overrideInputParameterName;

- (id)keywords;
- (id)entityName;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (BOOL)shouldLocalizeValueForSelector:(SEL)a0;
- (BOOL)inputRequired;
- (id)localizedKeyParameterDisplayName;
- (BOOL)openWhenRunParameterIsHidden;
- (unsigned long long)outputDisclosureLevel;
- (id)overrideDescriptionSummary;
- (id)overrideParameterSummary;
- (id)parameterOverrides;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)shouldOverrideParameterSummary;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;

@end
