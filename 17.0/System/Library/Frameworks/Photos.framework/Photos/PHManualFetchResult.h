@class NSArray, NSOrderedSet, NSString, PHPhotoLibrary;

@interface PHManualFetchResult : PHFetchResult {
    NSOrderedSet *_objectIDs;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

+ (id)emptyFetchResultWithPhotoLibrary:(id)a0;

- (id)copyWithOptions:(id)a0;
- (id)photoLibrary;
- (unsigned long long)hash;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)fetchedObjectIDsSet;
- (BOOL)isFullyBackedByObjectIDs;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)fetchRequest;
- (id)initWithObjects:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (id)fetchSortDescriptors;
- (id)changeHandlingKey;
- (unsigned long long)possibleChangesForChange:(id)a0 propertiesFetchResult:(id)a1;
- (id)containerIdentifier;
- (id)description;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 photosCount:(unsigned long long)a6 videosCount:(unsigned long long)a7 audiosCount:(unsigned long long)a8;
- (void).cxx_destruct;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (id)fetchUpdatedObjects;
- (id)fetchedObjects;
- (BOOL)isEqual:(id)a0;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (id)calculateMediaTypeCounts;
- (id)fetchedObjectIDs;
- (long long)collectionFetchType;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;

@end
