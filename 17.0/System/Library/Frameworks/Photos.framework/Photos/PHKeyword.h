@class NSString;

@interface PHKeyword : PHObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *shortcut;

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)entityKeyMap;
+ (id)identifierCode;
+ (id)fetchKeywordsForAsset:(id)a0 options:(id)a1;
+ (id)fetchKeywordsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchKeywordsWithOptions:(id)a0;
+ (id)fetchKeywordsWithTitles:(id)a0 options:(id)a1;
+ (id)localIdentifierWithUUID:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
