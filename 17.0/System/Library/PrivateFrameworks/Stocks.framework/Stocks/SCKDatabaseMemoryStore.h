@class CKServerChangeToken, NSMutableDictionary, NSDate;

@interface SCKDatabaseMemoryStore : NSObject <SCKDatabaseStore>

@property (copy, nonatomic) NSMutableDictionary *zoneStoresByName;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic, getter=isCloudBackupEnabled) BOOL cloudBackupEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)zoneStoreForSchema:(id)a0;

@end
