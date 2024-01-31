@class NSSet, NSString;

@interface RMModelStatusTestDictionaryValue : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusKey1;
@property (copy, nonatomic) NSString *statusKey2;

+ (id)buildRequiredOnlyWithKey1:(id)a0;
+ (id)buildWithKey1:(id)a0 key2:(id)a1;
+ (BOOL)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
