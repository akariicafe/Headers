@class NSString, NSDictionary;

@interface SASMUXResultCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *rcID;
@property (copy, nonatomic) NSDictionary *resultCandidates;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
