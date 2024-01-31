@class RMModelExampleCombineDeclaration_DictionaryCombine, NSSet, NSString, NSArray, RMModelExampleCombineDeclaration_DictionaryFirst, NSNumber;

@interface RMModelExampleCombineDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadBooleanOr;
@property (copy, nonatomic) NSNumber *payloadBooleanAnd;
@property (copy, nonatomic) NSNumber *payloadNumberMin;
@property (copy, nonatomic) NSNumber *payloadNumberMax;
@property (copy, nonatomic) NSString *payloadEnumLowest;
@property (copy, nonatomic) NSString *payloadEnumHighest;
@property (copy, nonatomic) NSString *payloadFirstString;
@property (copy, nonatomic) NSArray *payloadArrayAppend;
@property (copy, nonatomic) NSArray *payloadSetUnion;
@property (copy, nonatomic) NSArray *payloadSetIntersection;
@property (copy, nonatomic) RMModelExampleCombineDeclaration_DictionaryFirst *payloadDictionaryFirst;
@property (copy, nonatomic) RMModelExampleCombineDeclaration_DictionaryCombine *payloadDictionaryCombine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)assetTypes;
+ (id)buildWithIdentifier:(id)a0 booleanOr:(id)a1 booleanAnd:(id)a2 numberMin:(id)a3 numberMax:(id)a4 enumLowest:(id)a5 enumHighest:(id)a6 firstString:(id)a7 arrayAppend:(id)a8 setUnion:(id)a9 setIntersection:(id)a10 dictionaryFirst:(id)a11 dictionaryCombine:(id)a12;
+ (id)combineConfigurations:(id)a0;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)assetReferences;
- (void)combineWithOther:(id)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
