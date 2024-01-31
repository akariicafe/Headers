@class MCMContainerIdentity;

@interface MCMCommandUserManagedAssetsPath : MCMCommand <MCMParametersUserManagedAssetsPath>

@property (readonly, nonatomic, getter=isRelative) BOOL relative;
@property (readonly, nonatomic) BOOL createIfNecessary;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (void).cxx_destruct;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;

@end
