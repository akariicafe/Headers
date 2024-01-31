@class NSSet, NSString, CEMApplicationLockDeclaration_AppOptions, CEMApplicationLockDeclaration_AppUserEnabledOptions;

@interface CEMApplicationLockDeclaration_App : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadIdentifier;
@property (copy, nonatomic) CEMApplicationLockDeclaration_AppOptions *payloadOptions;
@property (copy, nonatomic) CEMApplicationLockDeclaration_AppUserEnabledOptions *payloadUserEnabledOptions;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withOptions:(id)a1 withUserEnabledOptions:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
