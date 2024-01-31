@class NSString;

@interface BCSDomainItemPersistentStore : BCSPersistentStore <BCSDomainItemCaching>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (const char *)schema;
- (long long)schemaVersion;
- (id)databasePath;
- (void)deleteAllDomainItems;
- (void)deleteAllExpiredDomainItems;
- (void)deleteDomainItemMatching:(id)a0;
- (id)domainItemMatching:(id)a0;
- (BOOL)executeDeleteDomainDomainItemSQLQuery:(id)a0;
- (void)updateDomainItem:(id)a0 withDomainItemIdentifier:(id)a1;
- (void)updateDomainItemsForDomainShard:(id)a0;

@end
