@class NSOrderedCollectionDifference, NSSet, PRPosterCollection;

@interface PRPosterCollectionDiffInspector : NSObject {
    PRPosterCollection *_lhsCollection;
    PRPosterCollection *_rhsCollection;
    NSSet *_updatedPosters;
    NSSet *_removedPosters;
    NSSet *_addedPosters;
    NSSet *_updatedAssocPosters;
    NSSet *_removedAssocPosters;
    NSSet *_addedAssocPosters;
    NSOrderedCollectionDifference *_assocPostersDiff;
}

@property (readonly, nonatomic) PRPosterCollection *initialCollection;
@property (readonly, nonatomic) PRPosterCollection *newCollection;
@property (readonly, nonatomic) NSOrderedCollectionDifference *postersDiff;
@property (readonly, nonatomic) NSSet *removedPosters;
@property (readonly, nonatomic) NSSet *addedPosters;
@property (readonly, nonatomic) NSSet *updatedPosters;
@property (readonly, nonatomic) NSSet *removedAssocPosters;
@property (readonly, nonatomic) NSSet *addedAssocPosters;
@property (readonly, nonatomic) NSSet *updatedAssocPosters;
@property (readonly, nonatomic) BOOL associatedPostersAreEqual;
@property (readonly, nonatomic) BOOL orderedPostersAreEqual;
@property (readonly, nonatomic) BOOL postersAreEqual;
@property (readonly, nonatomic) BOOL selectedPostersAreEqual;
@property (readonly, nonatomic) BOOL isEqual;

- (void).cxx_destruct;
- (id)initWithCollection:(id)a0 newCollection:(id)a1;

@end
