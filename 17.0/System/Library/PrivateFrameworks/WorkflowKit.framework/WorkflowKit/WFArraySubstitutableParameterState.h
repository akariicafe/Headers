@class NSUUID;

@interface WFArraySubstitutableParameterState : WFVariableSubstitutableParameterState

@property (readonly, nonatomic) NSUUID *identity;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)a0;
+ (id)valueFromSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;

- (void).cxx_destruct;
- (id)values;
- (id)initWithValues:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (void)getObjectRepresentationOfVariableWithContext:(id)a0 processingValueClass:(Class)a1 valueHandler:(id /* block */)a2;
- (id)initWithValues:(id)a0 identity:(id)a1;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
