@interface ATXStrictContextMatchAnchorModelCandidateClassifier : ATXNaivePositiveAnchorModelCandidateClassifier

- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)classifierType;
- (id)classifyCandidateForAnchorOccurrence:(id)a0 trainingResult:(id)a1;

@end
