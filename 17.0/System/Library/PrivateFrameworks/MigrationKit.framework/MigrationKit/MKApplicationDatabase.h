@interface MKApplicationDatabase : NSObject {
    struct sqlite3 { } *_database;
}

- (void)close;
- (void)begin;
- (void)drop;
- (id)init;
- (void)dealloc;
- (void)commit;
- (BOOL)addIdentifier:(id)a0;
- (id)identifiers;
- (void)open:(id)a0;
- (void)rollback;
- (void)create;
- (void)addIdentifiers:(id)a0;
- (BOOL)_addAppStoreIdentifier:(id)a0;
- (void)addAppStoreIdentifier:(id)a0;
- (id)appStoreIdentifiers;
- (long long)countForAppStoreIdentifiers;
- (void)query:(id)a0;

@end
