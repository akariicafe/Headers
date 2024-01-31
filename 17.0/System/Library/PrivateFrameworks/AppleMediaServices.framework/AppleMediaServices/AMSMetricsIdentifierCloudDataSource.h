@protocol AMSMetricsIdentifierCloudDataSourceDelegate;

@interface AMSMetricsIdentifierCloudDataSource : NSObject

@property (weak, nonatomic) id<AMSMetricsIdentifierCloudDataSourceDelegate> delegate;

+ (id)_database;
+ (id)_sharedQueue;
+ (void)cleanupIdentifiers;
+ (void)clearSyncState;
+ (void)removeAllRecords;

- (id)_parseRecord:(id)a0 error:(id *)a1;
- (id)_createRecordForIdentifier:(id)a0;
- (void)saveRecord:(id)a0 isServerRecord:(BOOL)a1;
- (void).cxx_destruct;
- (id)_createRecordForIdentifierStore:(id)a0;
- (void)removeRecordWithIdentifier:(id)a0;
- (void)fetchModifiedRecordsWithCompletion:(id /* block */)a0;

@end
