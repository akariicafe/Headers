@interface WFAppendVariableAction : WFAction

- (id)accessibilityName;
- (id)variableName;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)inheritedOutputContentClassesInWorkflow:(id)a0 context:(id)a1;
- (id)outputVariableWithVariableProvider:(id)a0 UUIDProvider:(id)a1;
- (id)providedVariableNames;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (BOOL)shouldBeSuggestedAfterAction:(id)a0 inWorkflow:(id)a1;

@end
