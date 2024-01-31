@class NSDictionary, NSString, HMCharacteristic;

@interface WFHMCharacteristicSubstitutableState : WFVariableSubstitutableParameterState

@property (retain, nonatomic) NSDictionary *serializedCharacteristic;
@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly, nonatomic) HMCharacteristic *characteristic;

- (id)serializedRepresentation;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;
- (id)initWithCharacteristic:(id)a0 homeIdentifier:(id)a1;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
