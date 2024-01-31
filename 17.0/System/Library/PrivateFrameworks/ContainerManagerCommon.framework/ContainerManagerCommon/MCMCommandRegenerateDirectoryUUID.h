@class MCMConcreteContainerIdentity;

@interface MCMCommandRegenerateDirectoryUUID : MCMCommand <MCMParametersWithConcreteContainer>

@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (void).cxx_destruct;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (id)initWithConcreteContainerIdentity:(id)a0 context:(id)a1 resultPromise:(id)a2;
- (id)regenerateDirectoryUUIDNoCacheUpdateWithMetadata:(id)a0 error:(id *)a1;

@end
