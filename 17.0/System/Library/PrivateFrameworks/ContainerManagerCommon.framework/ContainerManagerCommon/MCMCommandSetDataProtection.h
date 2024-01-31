@class MCMContainerIdentity;

@interface MCMCommandSetDataProtection : MCMCommand <MCMParametersSetDataProtection>

@property (readonly, nonatomic, getter=isThirdParty) BOOL thirdParty;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) BOOL retryIfLocked;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (void).cxx_destruct;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;

@end
