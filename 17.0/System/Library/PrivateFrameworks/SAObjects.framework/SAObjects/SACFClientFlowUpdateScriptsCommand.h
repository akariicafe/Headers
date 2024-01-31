@class NSArray;

@interface SACFClientFlowUpdateScriptsCommand : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *scripts;

+ (id)clientFlowUpdateScriptsCommand;
+ (id)clientFlowUpdateScriptsCommandWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
