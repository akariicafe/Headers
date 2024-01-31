@class IDSAccountController, NSDictionary, CNFRegController, NSString;

@interface FTRegAccountServiceDelegate : NSObject <AASetupAssistantDelegateService, AAAppleIDLoginPlugin>

@property (retain, nonatomic) CNFRegController *regController;
@property (retain, nonatomic) IDSAccountController *accountController;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cleanup;
- (id)serviceIdentifier;
- (id)init;
- (void).cxx_destruct;
- (id)name;
- (id)displayName;
- (long long)serviceType;
- (BOOL)_hasAccount;
- (void)handleLoginResponse:(id)a0 completion:(id /* block */)a1;
- (id)accountSetupRequestParameters;
- (void)completeSetupWithResponseParameters:(id)a0 handler:(id /* block */)a1;
- (id)delegateServiceIdentifier;
- (id)parametersForIdentityEstablishmentRequest;
- (id)parametersForLoginRequest;
- (id)_logName;
- (BOOL)_account:(id)a0 matchesSetupParameters:(id)a1;
- (id)_defaultSetupRequestParameters;
- (id)_existingAccountForSetupParameters:(id)a0;
- (id)_existingOperationalAccount;
- (void)_handleFailureWithErrorCode:(long long)a0;
- (void)_handleSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)_hasOperationalAccount;
- (BOOL)_shouldSkipAccountSetup:(id)a0;
- (id)initWithRegController:(id)a0;
- (BOOL)serviceIsAvailable;
- (void)setupOperationFailed;

@end
