@class MCMUserIdentity, MCMError, MCMContainerIdentity, NSString;

@interface MCMCommandCreateOrLookupAppGroupByAppGroupIdentifier : MCMCommand <MCMParametersCreateOrLookupAppGroupByAppGroupIdentifier>

@property (readonly, nonatomic) BOOL iOSStyleHandling;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;
@property (readonly, nonatomic) MCMError *error;
@property (readonly, nonatomic) NSString *appGroupIdentifier;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (void).cxx_destruct;
- (void)_commonInit:(id)a0;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;

@end
