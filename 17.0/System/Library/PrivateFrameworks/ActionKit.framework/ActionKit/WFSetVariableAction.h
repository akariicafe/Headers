@interface WFSetVariableAction : WFAction

- (id)accessibilityName;
- (id)variableName;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputVariableWithVariableProvider:(id)a0 UUIDProvider:(id)a1;
- (id)providedVariableNames;
- (void)runWithInput:(id)a0 error:(id *)a1;

@end
