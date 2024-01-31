@interface SAMPSetState : SADomainCommand

@property (nonatomic) int state;

+ (id)setStateWithDictionary:(id)a0 context:(id)a1;
+ (id)setState;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
