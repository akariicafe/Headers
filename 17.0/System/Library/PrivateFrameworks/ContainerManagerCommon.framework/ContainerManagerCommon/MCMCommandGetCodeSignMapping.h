@class NSString;

@interface MCMCommandGetCodeSignMapping : MCMCommand <MCMParametersWithIdentifier>

@property (readonly, nonatomic) NSString *identifier;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (void).cxx_destruct;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;

@end
