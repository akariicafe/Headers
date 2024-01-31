@class NSArray, NSOrderedSet, PHFetchOptions, NSString;

@interface PHUnauthorizedFetchResult : PHFetchResult

@property (readonly, copy) id /* block */ fetchBlock;
@property (readonly, copy) PHFetchOptions *options;
@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

- (id)copyWithOptions:(id)a0;
- (id)photoLibrary;
- (unsigned long long)hash;
- (void)updateRegistrationForChangeNotificationDeltas;
- (BOOL)isFullyBackedByObjectIDs;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (id)fetchRequest;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (id)fetchSortDescriptors;
- (id)changeHandlingKey;
- (unsigned long long)possibleChangesForChange:(id)a0 propertiesFetchResult:(id)a1;
- (id)containerIdentifier;
- (id)description;
- (void).cxx_destruct;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (id)fetchedObjects;
- (BOOL)isEqual:(id)a0;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (id)calculateMediaTypeCounts;
- (id)fetchedObjectIDs;
- (long long)collectionFetchType;
- (id)initWithOptions:(id)a0 status:(long long)a1 fetchBlock:(id /* block */)a2;

@end
