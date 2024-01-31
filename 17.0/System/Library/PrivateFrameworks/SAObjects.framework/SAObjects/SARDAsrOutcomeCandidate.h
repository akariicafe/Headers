@interface SARDAsrOutcomeCandidate : SASResultCandidate

+ (id)asrOutcomeCandidateWithDictionary:(id)a0 context:(id)a1;
+ (id)asrOutcomeCandidate;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
