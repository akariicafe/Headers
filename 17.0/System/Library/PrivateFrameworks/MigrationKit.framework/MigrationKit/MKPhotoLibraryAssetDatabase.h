@interface MKPhotoLibraryAssetDatabase : NSObject {
    struct sqlite3 { } *_database;
    unsigned long long _count;
}

- (id)collections;
- (void)close;
- (void)begin;
- (void)dealloc;
- (void)commit;
- (void)remove:(id)a0;
- (unsigned long long)count;
- (void)open:(id)a0;
- (void)rollback;
- (id)asset;
- (id)initWithType:(unsigned long long)a0;
- (unsigned long long)countForCollection:(id)a0;
- (void)create;
- (void)addAsset:(id)a0;
- (id)identifiersForCollection:(id)a0 offset:(unsigned long long)a1 limit:(unsigned long long)a2;
- (void)query:(id)a0;
- (void)setIdentifier:(id)a0 forAsset:(id)a1;

@end
