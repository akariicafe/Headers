@interface PHMomentList : PHCollectionList

+ (id)fetchType;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)identifierCode;

- (id)localizedTitle;
- (id)description;
- (long long)collectionListType;
- (BOOL)hasLocationInfo;
- (BOOL)hasLocalizedTitle;
- (id)localizedLocationNames;
- (Class)changeRequestClass;
- (BOOL)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
