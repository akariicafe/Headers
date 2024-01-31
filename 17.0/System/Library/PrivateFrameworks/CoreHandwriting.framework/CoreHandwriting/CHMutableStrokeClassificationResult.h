@class NSMutableDictionary, NSMutableSet;

@interface CHMutableStrokeClassificationResult : CHStrokeClassificationResult {
    NSMutableDictionary *_strokeClassificationsByStrokeIdentifier;
    NSMutableDictionary *_scriptClassificationsByStrokeIdentifier;
    NSMutableDictionary *_substrokesByStrokeIdentifier;
    NSMutableSet *_nontextCandidates;
}

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)a0 scriptClassificationsByStrokeIdentifier:(id)a1 substrokesByStrokeIdentifier:(id)a2 nontextCandidates:(id)a3;
- (id)nontextCandidates;
- (id)scriptClassificationsByStrokeIdentifier;
- (id)strokeClassificationsByStrokeIdentifier;
- (id)substrokesByStrokeIdentifier;
- (void)updateByAddingClutterStroke:(id)a0;
- (void)updateByAddingNonClutterStroke:(id)a0 withAllStrokes:(id)a1 forceText:(BOOL)a2;
- (void)updateByRemovingStrokeIdentifier:(id)a0 withRemovedAndClutterStrokeIDs:(id)a1;
- (void)updateByTransitionedClutterStrokeIdentifier:(id)a0 withRemovedAndClutterStrokeIDs:(id)a1;
- (void)updateNonTextCandidatesByRemovingSupportFromStrokeIdentifier:(id)a0 skippingCandidatesWithStrokeIdentifier:(id)a1;
- (void)updateNonTextCandidatesSupportFromStroke:(id)a0;

@end
