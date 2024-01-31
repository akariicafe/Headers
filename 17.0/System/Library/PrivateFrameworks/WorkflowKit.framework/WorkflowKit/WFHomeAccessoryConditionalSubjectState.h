@class WFHMServiceParameterState, NSFormatter, NSDictionary, HMHome, HMCharacteristic, HMService, WFHMCharacteristicSubstitutableState;

@interface WFHomeAccessoryConditionalSubjectState : WFConditionalSubjectParameterState

@property (retain, nonatomic) NSDictionary *serializedWFHMServiceParameter;
@property (retain, nonatomic) NSDictionary *serializedWFHMCharacteristicSubstitutableState;
@property (retain, nonatomic) WFHMServiceParameterState *serviceParameterState;
@property (retain, nonatomic) WFHMCharacteristicSubstitutableState *characteristicSubstitutableState;
@property (retain, nonatomic) NSFormatter *characteristicValueFormatter;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMService *service;
@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly, nonatomic) BOOL negatesValue;

+ (id)subjectType;

- (id)serializedRepresentation;
- (unsigned long long)hash;
- (long long)contentType;
- (id)stepValue;
- (id)minimumValue;
- (id)unit;
- (void).cxx_destruct;
- (id)maximumValue;
- (BOOL)isEqual:(id)a0;
- (id)unitType;
- (id)homeIdentifier;
- (id)maximumLength;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)getContentWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* block */)a0;
- (id)initWithSerializedWFHMServiceParameter:(id)a0 serializedWFHMCharacteristicSubstitutableState:(id)a1 negatesValue:(BOOL)a2;
- (id)initWithService:(id)a0 characteristic:(id)a1 homeIdentifier:(id)a2 negatesValue:(BOOL)a3;
- (BOOL)isEnumeration;
- (id)localizedLabelForEnumerationPossibleState:(id)a0;

@end
