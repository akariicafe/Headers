@class NSMutableDictionary;

@interface PKCloudRecordArray : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabase;
@property (retain, nonatomic) NSMutableDictionary *reportItemsByAccountIdentifier;
@property (nonatomic) long long recordsFetchedCount;

- (id)allItems;
- (id)init;
- (id)allRecordIDs;
- (void)encodeWithCoder:(id)a0;
- (long long)count;
- (id)allObjects;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithDetailedOutput:(BOOL)a0 includeItem:(BOOL)a1;
- (void)addCloudRecord:(id)a0 forContainerDatabaseIdentifier:(id)a1;
- (void)addCountToRecordsFetched:(long long)a0;
- (void)addTransactionSyncReportItem:(id)a0 forAccountIdentifier:(id)a1;
- (void)addTransactionSyncReportItems:(id)a0 forAccountIdentifier:(id)a1;
- (id)allObjectsByDatabaseIdentifier;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)a0;
- (void)applyCloudRecordArray:(id)a0;
- (id)descriptionWithItem:(BOOL)a0;
- (id)transactionSyncReportItemsByAccountIdentifier;

@end
