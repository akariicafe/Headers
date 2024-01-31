@class PGGraphLocationHelper, NSArray, NSSet, NSMapTable, PGIncompleteLocationResolver;

@interface PGLocationsResolver : NSObject {
    PGGraphLocationHelper *_locationHelper;
}

@property (retain, nonatomic) PGIncompleteLocationResolver *incompleteLocationResolver;
@property (retain, nonatomic) NSArray *sortedMoments;
@property (retain, nonatomic) NSArray *resolvedMomentNodes;
@property (retain, nonatomic) NSArray *resolvedLocationNodes;
@property (retain, nonatomic) NSSet *ignoredLocationNodes;
@property (retain, nonatomic) NSSet *ignoredAddressNodes;
@property (nonatomic) BOOL shouldCreateLocationToAddressMapTable;
@property (nonatomic) float maximumMissingLocationsThreshold;
@property (readonly, nonatomic) NSMapTable *resolvedLocationNodesToAddressNodesMapTable;

- (void).cxx_destruct;
- (void)_resolve;
- (id)initWithMomentNodes:(id)a0 incompleteLocationResolver:(id)a1 locationHelper:(id)a2;
- (id)initWithSortedMomentNodes:(id)a0 incompleteLocationResolver:(id)a1 locationHelper:(id)a2;
- (void)setCreateLocationToAddressMapTable:(BOOL)a0;

@end
