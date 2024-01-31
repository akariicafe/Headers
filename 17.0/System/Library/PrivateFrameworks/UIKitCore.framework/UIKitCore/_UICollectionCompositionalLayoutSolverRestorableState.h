@class NSString, NSArray, NSIndexSet;

@interface _UICollectionCompositionalLayoutSolverRestorableState : NSObject <_UICollectionCompositionalLayoutSolverRestorableState> {
    NSArray *_bookmarkSnapshotters;
    NSIndexSet *_orthogonalSectionIndexes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)applyToSolver:(id)a0;

@end
