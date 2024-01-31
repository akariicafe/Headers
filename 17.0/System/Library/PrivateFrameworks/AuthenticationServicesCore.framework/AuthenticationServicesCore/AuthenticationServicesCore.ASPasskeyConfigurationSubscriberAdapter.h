@interface AuthenticationServicesCore.ASPasskeyConfigurationSubscriberAdapter : NSObject <RMConfigurationMultipleAdapter> {
    void /* unknown type, empty encoding */ currentConfiguration;
}

- (id)init;
- (void).cxx_destruct;
- (id)declarationKeyForConfiguration:(id)a0;
- (id)allDeclarationKeys;
- (BOOL)applyConfiguration:(id)a0 scope:(long long)a1 returningReasons:(id *)a2 error:(id *)a3;
- (id)configurationClasses;
- (BOOL)removeDeclarationKey:(id)a0 scope:(long long)a1 error:(id *)a2;

@end
