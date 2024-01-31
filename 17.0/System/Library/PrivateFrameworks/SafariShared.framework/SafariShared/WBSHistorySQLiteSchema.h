@class NSDictionary, WBSSQLiteDatabase, WBSHistoryCrypto, NSDate;

@interface WBSHistorySQLiteSchema : NSObject {
    WBSSQLiteDatabase *_database;
    WBSHistoryCrypto *_crypto;
    NSDate *_migrateVisitsAfterDate;
}

@property (readonly, nonatomic) NSDictionary *legacyDatabase;

- (id)init;
- (void)_removeLegacyHistoryDatabaseIfNeeded;
- (int)_migrateToSchemaVersion_5;
- (int)migrateToCurrentSchemaVersionIfNeeded;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_6;
- (void)_migrateLegacyDatabase;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (int)_migrateToSchemaVersion_4;
- (int)_migrateToSchemaVersion:(int)a0;
- (int)_migrateToSchemaVersion_11;
- (int)_migrateToSchemaVersion_15;
- (long long)_migrateLegacyVisitWithItemID:(long long)a0 visitTime:(double)a1 title:(id)a2 score:(unsigned long long)a3 loadSuccessful:(BOOL)a4 httpNonGet:(BOOL)a5 synthesized:(BOOL)a6;
- (BOOL)migrateLegacyDatabaseCreatingRedirectChains:(id)a0 urlsToItemAndLastVisitID:(id)a1 visitsToUseForRedirectChains:(id)a2;
- (int)_migrateToSchemaVersion_8;
- (void).cxx_destruct;
- (int)_migrateToSchemaVersion_9;
- (long long)_migrateLegacyItem:(id)a0 dailyVisitCounts:(void *)a1 weeklyVisitCounts:(void *)a2;
- (int)_migrateToSchemaVersion_10;
- (int)_migrateToSchemaVersion_13;
- (id)initWithDatabase:(id)a0 crypto:(id)a1 migrateVisitsAfterDate:(id)a2;
- (int)_migrateToSchemaVersion_12;
- (int)_migrateToSchemaVersion_14;
- (id)_migrateLegacyDatabaseCreatingItemsAndVisits:(id)a0 outVisitsToUseForRedirectChains:(id)a1;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToSchemaVersion_16;
- (int)_migrateToSchemaVersion_7;

@end
