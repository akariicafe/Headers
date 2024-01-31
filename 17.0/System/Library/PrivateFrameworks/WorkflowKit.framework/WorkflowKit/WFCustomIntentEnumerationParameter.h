@class NSArray, INCodableEnumAttribute, NSDictionary;

@interface WFCustomIntentEnumerationParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) INCodableEnumAttribute *enumAttribute;
@property (readonly, nonatomic) NSDictionary *enumNamesToKeys;
@property (readonly, nonatomic) NSDictionary *keysToEnumNames;
@property (readonly, nonatomic) NSDictionary *enumNamesToLabels;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (Class)singleStateClass;

@end
