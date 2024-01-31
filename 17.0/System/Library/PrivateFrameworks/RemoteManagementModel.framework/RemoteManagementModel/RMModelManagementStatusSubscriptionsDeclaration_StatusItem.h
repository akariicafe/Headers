@class NSSet, NSString;

@interface RMModelManagementStatusSubscriptionsDeclaration_StatusItem : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadName;

+ (id)buildRequiredOnlyWithName:(id)a0;
+ (id)buildWithName:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
