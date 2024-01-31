@interface RMStoreProfilesAdapter : NSObject

@property (nonatomic) BOOL isSystemScope;

- (id)initWithScope:(long long)a0;
- (void)uninstallProfileWithIdentifier:(id)a0 store:(id)a1 completionHandler:(id /* block */)a2;
- (id)_disallowedPayloadTypes;
- (BOOL)_canAssumeOwnershipOfProfile:(id)a0 newProfile:(id)a1 newDeclarationKey:(id)a2 store:(id)a3;
- (BOOL)_canInstallProfile:(id)a0 store:(id)a1 declarationKey:(id)a2 outAssumeOwnership:(BOOL *)a3 error:(id *)a4;
- (BOOL)_canReplaceProfile:(id)a0 newProfile:(id)a1 newDeclarationKey:(id)a2 store:(id)a3 outAssumeOwnership:(BOOL *)a4 error:(id *)a5;
- (BOOL)_canUninstallProfileWithIdentifier:(id)a0 store:(id)a1 error:(id *)a2;
- (id)_declarationKeyForProfile:(id)a0;
- (id)_declarationKeyForUserInfo:(id)a0;
- (id)_installOptionsForStore:(id)a0 declarationKey:(id)a1 assumeOwnership:(BOOL)a2;
- (id)_installProfileData:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)_isManagedByMDM:(id)a0;
- (id)_payloadStructure:(id)a0;
- (id)_personaIDForStore:(id)a0;
- (id)_profileForIdentifier:(id)a0 rmOnly:(BOOL)a1;
- (BOOL)_removeProfileWithIdentifier:(id)a0 error:(id *)a1;
- (void)installProfileData:(id)a0 store:(id)a1 declarationKey:(id)a2 completionHandler:(id /* block */)a3;
- (id)installedProfileIdentifierByDeclarationKey;
- (id)profileNameForIdentifier:(id)a0;

@end
