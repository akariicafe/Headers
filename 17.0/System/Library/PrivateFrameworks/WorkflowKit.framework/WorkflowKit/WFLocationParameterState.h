@interface WFLocationParameterState : WFVariableSubstitutableParameterState

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

- (id)initWithValue:(id)a0;
- (void)getContentCollectionWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)getContentItemFromValue:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
