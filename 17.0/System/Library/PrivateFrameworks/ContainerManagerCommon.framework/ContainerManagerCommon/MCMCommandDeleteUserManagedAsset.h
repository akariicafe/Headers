@class NSString, MCMContainerIdentity;

@interface MCMCommandDeleteUserManagedAsset : MCMCommand <MCMParametersDeleteUserManagedAsset>

@property (readonly, nonatomic) NSString *sourceRelativePath;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (void).cxx_destruct;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;

@end
