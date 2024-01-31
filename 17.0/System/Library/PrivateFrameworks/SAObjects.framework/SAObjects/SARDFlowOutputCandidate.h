@class NSArray, NSString, SARDServerContextUpdateCandidate;

@interface SARDFlowOutputCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *payload;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (retain, nonatomic) SARDServerContextUpdateCandidate *serverContextUpdateCandidate;
@property (nonatomic) BOOL shouldNotMitigateAsFalseTrigger;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
