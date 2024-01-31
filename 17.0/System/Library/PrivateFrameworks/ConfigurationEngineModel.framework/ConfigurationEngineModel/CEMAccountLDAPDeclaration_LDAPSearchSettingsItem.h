@class NSSet, NSString;

@interface CEMAccountLDAPDeclaration_LDAPSearchSettingsItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadLDAPSearchSettingDescription;
@property (copy, nonatomic) NSString *payloadLDAPSearchSettingSearchBase;
@property (copy, nonatomic) NSString *payloadLDAPSearchSettingScope;

+ (id)buildRequiredOnlyWithLDAPSearchSettingSearchBase:(id)a0;
+ (id)buildWithLDAPSearchSettingDescription:(id)a0 withLDAPSearchSettingSearchBase:(id)a1 withLDAPSearchSettingScope:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
