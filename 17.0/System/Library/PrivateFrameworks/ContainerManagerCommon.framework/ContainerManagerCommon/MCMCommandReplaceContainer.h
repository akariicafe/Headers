@class MCMConcreteContainerIdentity;

@interface MCMCommandReplaceContainer : MCMCommand <MCMParametersReplace>

@property (readonly, nonatomic) BOOL preserveOldPathIdentifier;
@property (readonly, nonatomic) BOOL preserveOldInternalUUID;
@property (readonly, nonatomic) BOOL asyncReclaim;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityOld;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *containerIdentityNew;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;
+ (BOOL)recoverFromReplaceOperationsWithError:(id *)a0;
+ (id)_readAndValidateReplaceFileAtUrl:(id)a0 error:(id *)a1;

- (void)execute;
- (void).cxx_destruct;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)_writeToDiskReplaceAt:(id)a0 old:(id)a1 withNew:(id)a2 usingStaging:(id)a3 toDestination:(id)a4 error:(id *)a5;
- (id)initWithConcreteContainerIdentityOld:(id)a0 concreteContainerIdentityNew:(id)a1 preserveOldPathIdentifier:(BOOL)a2 preserveOldInternalUUID:(BOOL)a3 asyncReclaim:(BOOL)a4 context:(id)a5 resultPromise:(id)a6;

@end
