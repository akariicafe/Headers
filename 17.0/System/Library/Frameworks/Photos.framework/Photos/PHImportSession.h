@class NSString;

@interface PHImportSession : PHAssetCollection

@property (readonly, nonatomic) NSString *importSessionID;

+ (id)fetchType;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)identifierCode;
+ (id)fetchImportSessionsWithOptions:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
