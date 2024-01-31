@class CNContactStore, NSArray;

@interface PLPersonContactInfoMigrator : NSObject {
    CNContactStore *_contactStore;
    NSArray *_keysToFetch;
    int _updateNameCount;
    int _populateMatchingDictionaryCount;
}

+ (id)migrationQueue;
+ (void)migratePersonContactInfoInPhotoLibrary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)updateNameOfPerson:(id)a0 withContact:(id)a1;
- (id)enumerateResultsWithIncrementalSaveUsingFetchRequest:(id)a0 inContext:(id)a1 withBlock:(id /* block */)a2;
- (void)migratePerson:(id)a0;
- (void)migratePersonContactInfoInContext:(id)a0;
- (void)migratePersonContactInfoInPhotoLibrary:(id)a0;
- (void)populateMatchingDictionaryOfPerson:(id)a0 withContact:(id)a1;

@end
