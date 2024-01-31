@interface TIWordSearchHandwriting : TIWordSearch

- (void)acceptCandidate:(void *)a0;
- (id)mecabraCreationOptionsDictionary;
- (void)updateMecabraState;
- (id)generateConversionsForCandidate:(id)a0 candidateContext:(id)a1 stringContext:(id)a2;
- (struct __MecabraContext { } *)createMecabraContextFromCandidateContext:(id)a0 stringContext:(id)a1;
- (id)generatePredictionsWithCandidateContext:(id)a0 stringContext:(id)a1 option:(unsigned long long)a2;

@end
