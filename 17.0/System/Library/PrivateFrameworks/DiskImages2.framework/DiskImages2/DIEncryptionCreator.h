@interface DIEncryptionCreator : DIEncryptionFrontend

+ (BOOL)supportsSecureCoding;

- (id)CLIPassphrasePrompt;
- (id)GUIPassphraseLabel;
- (id)GUIVerifyPassphraseLabel;
- (id)CLIVerifyPassphrasePrompt;
- (id)GUIPassphrasePrompt;
- (BOOL)allowStoringInKeychain;
- (BOOL)createAndStoreInSystemKeychainWithAccount:(id)a0 error:(id *)a1;
- (BOOL)createWithXpcHandler:(id)a0 error:(id *)a1;

@end
