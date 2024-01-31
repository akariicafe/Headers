@class NSURL;

@interface MCMCommandContainerFromPath : MCMCommand <MCMParametersWithURL>

@property (readonly, nonatomic) NSURL *url;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (struct container_object_s { } *)_containerFromRelayToDaemonWithURL:(id)a0 relativePath:(char **)a1 error:(struct container_error_extended_s **)a2;
- (void)execute;
- (void).cxx_destruct;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;

@end
