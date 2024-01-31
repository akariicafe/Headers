@class NSSet, NSNumber, NSString;

@interface RMModelExampleCombineDeclaration_DictionaryFirst : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadNumber;
@property (copy, nonatomic) NSString *payloadEnum;

+ (id)buildRequiredOnly;
+ (id)buildWithNumber:(id)a0 enum:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;
- (void)combineWithOther:(id)a0;

@end
