@class NSSet, NSString;

@interface RMModelAccountLDAPDeclaration_SearchSettingsItem : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadVisibleDescription;
@property (copy, nonatomic) NSString *payloadSearchBase;
@property (copy, nonatomic) NSString *payloadScope;

+ (id)buildRequiredOnlyWithSearchBase:(id)a0;
+ (id)buildWithVisibleDescription:(id)a0 searchBase:(id)a1 scope:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
