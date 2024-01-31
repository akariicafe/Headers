@class NSUUID;

@interface WFDictionarySubstitutableParameterState : WFVariableSubstitutableParameterState

@property (readonly, nonatomic) NSUUID *identity;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

- (id)keyValuePairs;
- (void).cxx_destruct;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)initWithKeyValuePairs:(id)a0 identity:(id)a1;
- (id)containedVariables;
- (void)getObjectRepresentationOfVariableWithContext:(id)a0 processingValueClass:(Class)a1 valueHandler:(id /* block */)a2;
- (id)initWithKeyValuePairs:(id)a0;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
