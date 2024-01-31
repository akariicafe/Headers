@interface CKDBackingPlatformAccount : CKDBackingAccount

- (void)updateAccountPropertiesAndSaveAccount:(id /* block */)a0;
- (id)ckAccount;
- (long long)accountType;
- (id)initWithAppleAccount:(id)a0;

@end
