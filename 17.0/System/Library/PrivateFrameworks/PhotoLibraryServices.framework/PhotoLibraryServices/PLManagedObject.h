@class PLPhotoLibrary, NSExpressionDescription, NSString, PLPhotoLibraryPathManager;

@interface PLManagedObject : NSManagedObject <PLJournalEntryPayloadUpdateAdapter, PLValidatedManagedObject>

@property (class, readonly) NSExpressionDescription *objectIDDescription;

@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL isRegisteredWithUserInterfaceContext;
@property (readonly, copy, nonatomic) NSString *shortObjectIDURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)a0;
+ (id)entityInManagedObjectContext:(id)a0;
+ (id)attributeValidationRules;

- (void)willSave;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (id)duplicateSortPropertyNames;
- (BOOL)supportsCloudUpload;
- (BOOL)isSyncableChange;
- (id)duplicateSortPropertyNamesSkip;
- (BOOL)isValidForJournalPersistence;
- (id)managedObject;
- (id)payloadsForChangedKeys:(id)a0;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (void)pl_safeSetValue:(id)a0 forKey:(id)a1 valueDidChangeHandler:(id /* block */)a2;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
