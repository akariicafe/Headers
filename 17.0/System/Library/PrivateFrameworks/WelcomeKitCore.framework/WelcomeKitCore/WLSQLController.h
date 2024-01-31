@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface WLSQLController : NSObject {
    struct sqlite3 { } *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
}

@property (copy, nonatomic) NSString *databasePath;

+ (long long)persistentValueForDate:(id)a0;

- (id)init;
- (void)dealloc;
- (void)closeDatabase;
- (void).cxx_destruct;
- (long long)_schemaVersion;
- (void)_openDatabase;
- (void)updateStatistics:(id)a0;
- (void)_deleteAccounts;
- (id)dataForSummary:(id)a0;
- (void)insertMetadata:(id)a0 forSourceDevice:(id)a1;
- (id)migrationErrors;
- (void)_deleteSummaries;
- (void)_ensureCorrectSchema;
- (BOOL)_foundHandleIDs:(id)a0 representSameGroupMessageAsHandleIDs:(id)a1 handleIDsAreComplete:(BOOL)a2;
- (void)_insertStatistics_onDatabaseQueue:(id)a0;
- (id)_migratableAppsForDevice:(id)a0;
- (void)_onDatabaseQueue_updateMigrationState:(int)a0 forSummary:(id)a1 removeData:(BOOL)a2;
- (long long)_performQuery:(id)a0 rowHandler:(id /* block */)a1;
- (int)_sqlite3_bind_NSDate:(id)a0 forStatement:(struct sqlite3_stmt { } *)a1 position:(int)a2;
- (id)_sqlite3_column_NSDateForStatement:(struct sqlite3_stmt { } *)a0 column:(int)a1;
- (unsigned long long)_totalSummarySegmentCountForAccounts:(id)a0 migrationStateComparisonOperator:(id)a1 migrationState:(long long)a2;
- (id)accountsForMigrator:(id)a0 device:(id)a1;
- (void)deleteAccountsAndSummariesForAllDevices;
- (BOOL)deleteAccountsAndSummariesForMigrator:(id)a0 device:(id)a1;
- (void)deleteGroupMessageInfoForAllDevices;
- (void)deleteMessagePhoneNumbersForAllDevices;
- (void)deleteMetadataForAllDevices;
- (void)deleteMigratableAppsForAllDevices;
- (void)deleteStatisticsForAllDevices;
- (void)deleteSuggestedAppBundleIDsForAllDevices;
- (void)deleteSummaryDataForAllDevices;
- (id)groupMessageInfoMatchingSortedHandleIDs:(id)a0 handleIDsAreComplete:(BOOL)a1 didMatchExactly:(BOOL *)a2;
- (id)groupMessageInfoMatchingSourceThreadID:(id)a0;
- (unsigned long long)insertAccount:(id)a0 migrator:(id)a1 device:(id)a2;
- (void)insertGroupMessageInfoWithSortedHandleIDs:(id)a0 handleIDsAreComplete:(BOOL)a1 roomName:(id)a2 groupID:(id)a3;
- (void)insertGroupMessageInfoWithSourceThreadID:(id)a0 roomName:(id)a1 groupID:(id)a2;
- (void)insertMessagePhoneNumberWithIcc:(id)a0 ccAcNumber:(id)a1;
- (void)insertMigratableApp:(id)a0 forDevice:(id)a1;
- (unsigned long long)insertRecordSummary:(id)a0 account:(id)a1;
- (id)messagePhoneNumberIccForCcAcNumber:(id)a0;
- (id)migratableAppsForAllDevices;
- (id)migrationMetadataForSourceDevice:(id)a0 strictMatch:(BOOL)a1;
- (void)removeDataAndSetDidImportForSummary:(id)a0;
- (void)setData:(id)a0 forSummary:(id)a1;
- (void)setDidDownloadForSummary:(id)a0 forSourceDevice:(id)a1;
- (void)setMetadata:(id)a0 forSourceDevice:(id)a1;
- (void)setMigrationError:(id)a0 forSummary:(id)a1;
- (void)setWillImportForSummary:(id)a0;
- (id)statisticsForContentType:(id)a0;
- (id)summariesForAccount:(id)a0;
- (id)summariesForAccounts:(id)a0 sortedByModifiedDate:(BOOL)a1;
- (unsigned long long)totalSummaryDownloadSegmentCountForAccounts:(id)a0;
- (unsigned long long)totalSummaryDownloadedSegmentCountForAccounts:(id)a0;
- (void)totalSummaryItemSizeForAccounts:(id)a0 addOverhead:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateModifiedDateForSummary:(id)a0;

@end
