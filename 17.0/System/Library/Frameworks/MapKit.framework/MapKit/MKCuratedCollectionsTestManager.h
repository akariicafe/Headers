@interface MKCuratedCollectionsTestManager : NSObject <MKCuratedCollectionsSyncCoordinator>

- (BOOL)collectionIsSaved:(id)a0;
- (BOOL)collectionIsSavedWithIdentifier:(id)a0;
- (id)placeWithCollectionUsingJSONAtPath:(id)a0;

@end
