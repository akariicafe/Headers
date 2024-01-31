@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryDatabase : NSObject {
    SSSQLiteDatabase *_database;
}

+ (id)newDefaultInstance;
+ (void)_createDatabaseDirectory;
+ (id)accountUniqueIdentifierKey;
+ (BOOL)_setupDatabase:(id)a0;

- (id)database;
- (id)init;
- (void)readUsingTransactionBlock:(id /* block */)a0;
- (void)dealloc;
- (BOOL)setValue:(id)a0 forDatabaseProperty:(id)a1;
- (id)valueForDatabaseProperty:(id)a0;
- (void)readAsyncUsingTransactionBlock:(id /* block */)a0;
- (void)modifyUsingAppPurchaseHistoryTransactionBlock:(id /* block */)a0;
- (id)allProperties:(id)a0 accountID:(id)a1 includingHidden:(BOOL)a2;
- (BOOL)removeValueForDatabaseProperty:(id)a0;
- (BOOL)setLocalRevision:(long long)a0 forAccountUniqueIdentifier:(id)a1;
- (BOOL)resetCacheForNewAccountID:(id)a0;
- (id)initWithDatabaseURL:(id)a0 readOnly:(BOOL)a1;
- (id)currentAccountUniqueIdentifier;
- (long long)localRevisionForAccountUniqueIdentifier:(id)a0;
- (BOOL)setCurrentAccountUniqueIdentifier:(id)a0;

@end
