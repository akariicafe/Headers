@class WBSPasswordGenerationManager;

@interface SFStrongPasswordGenerator : NSObject {
    WBSPasswordGenerationManager *_passwordGenerationManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)generatedPasswordForAppWithAppID:(id)a0 associatedDomains:(id)a1 passwordRules:(id)a2 confirmPasswordRules:(id)a3;
- (id)generatedPasswordForAppWithAssociatedDomains:(id)a0 passwordRules:(id)a1 confirmPasswordRules:(id)a2;

@end
