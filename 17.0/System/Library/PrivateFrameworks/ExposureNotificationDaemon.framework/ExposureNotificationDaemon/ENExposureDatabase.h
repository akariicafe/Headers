@class ENSQLiteConnection, NSURL;

@interface ENExposureDatabase : NSObject {
    NSURL *_databaseURL;
}

@property (readonly, nonatomic) ENSQLiteConnection *connection;
@property (copy, nonatomic) id /* block */ errorMetricReporter;
@property (readonly, nonatomic) BOOL isOpen;

+ (void)_obliterateDatabaseAtURL:(id)a0 reason:(id)a1 generateStackshot:(BOOL)a2;

- (void)close;
- (id)initWithDirectoryURL:(id)a0;
- (id)initWithURL:(id)a0;
- (id)_initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)openWithError:(id *)a0;
- (id)_advertisementWithRPIData:(id)a0 encryptedAEMData:(id)a1 timestamp:(long long)a2 scanInterval:(int)a3 typicalRSSI:(int)a4 maxRSSI:(int)a5 saturated:(int)a6 counter:(int)a7;
- (id)_advertisementsForTemporaryExposureKeyRowID:(long long)a0 connection:(id)a1 error:(id *)a2;
- (BOOL)_checkDatabaseOpenWithError:(id *)a0;
- (BOOL)_createOrMigrateSchemaFromVersion:(long long)a0 error:(id *)a1;
- (BOOL)_createSchemaWithConnection:(id)a0 error:(id *)a1;
- (BOOL)_getExistingPersistentTemporaryExposureKey:(id *)a0 rowID:(long long *)a1 keyData:(id)a2 connection:(id)a3 error:(id *)a4;
- (BOOL)_insertAdvertisement:(id)a0 keyRowID:(long long)a1 connection:(id)a2 error:(id *)a3;
- (BOOL)_insertExposureDetectionFile:(id)a0 sessionID:(id)a1 connection:(id)a2 error:(id *)a3;
- (BOOL)_insertOrUpdateExposureDetectionHistorySession:(id)a0 connection:(id)a1 error:(id *)a2;
- (BOOL)_insertPersistentTemporaryExposureKey:(id)a0 connection:(id)a1 error:(id *)a2;
- (id)_persistentTemporaryExposureKeyWithKeyData:(id)a0 appBundleIdentifier:(id)a1 regionCountryCode:(id)a2 rollingStartNumber:(long long)a3 rollingPeriod:(long long)a4 daysSinceOnsetOfSymptoms:(long long)a5 diagnosisReportType:(int)a6 originalReportType:(int)a7 transmissionRiskLevel:(int)a8 variantOfConcernType:(int)a9 originalVariantOfConcernType:(int)a10;
- (BOOL)_reallyOpenDatabaseWithError:(id *)a0;
- (void)_reportErrorMetric:(unsigned int)a0;
- (void)_reportSQLiteResult:(int)a0;
- (id)_sessionIDForUUID:(id)a0 connection:(id)a1 error:(id *)a2;
- (long long)_updateExistingPersistentKeyIfNecessary:(id)a0 replacementKey:(id)a1 existingKeyID:(long long)a2 connection:(id)a3 error:(id *)a4;
- (id)advertisementCountsByTemporaryKeyDatasWithError:(id *)a0;
- (BOOL)deleteExposureDetectionHistoryWithError:(id *)a0;
- (BOOL)enumerateExposureDetectionHistoryFilesForSessionUUID:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (BOOL)enumerateExposureDetectionHistorySessionsWithError:(id *)a0 handler:(id /* block */)a1;
- (BOOL)enumerateMatchedAdvertisementsWithError:(id *)a0 handler:(id /* block */)a1;
- (BOOL)getAdvertisementCount:(unsigned int *)a0 error:(id *)a1;
- (BOOL)getValue:(id *)a0 forKey:(id)a1 ofClass:(Class)a2 connection:(id)a3 error:(id *)a4;
- (BOOL)getValue:(id *)a0 forKey:(id)a1 ofClass:(Class)a2 error:(id *)a3;
- (id)initInMemoryDatabase;
- (BOOL)insertExposureDetectionFile:(id)a0 session:(id)a1 error:(id *)a2;
- (long long)insertMatchedAdvertisements:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)purgeAllAndCloseWithReason:(id)a0;
- (BOOL)purgeRecordsWithInterval:(double)a0 nowDate:(id)a1 error:(id *)a2;
- (BOOL)setPropertyListValue:(id)a0 forKey:(id)a1 expiryDate:(id)a2 error:(id *)a3;
- (BOOL)setValue:(id)a0 forKey:(id)a1 expiryDate:(id)a2 error:(id *)a3;
- (BOOL)setValue:(id)a0 forKey:(id)a1 type:(long long)a2 expiryDate:(id)a3 modDate:(id)a4 connection:(id)a5 error:(id *)a6;
- (BOOL)upsertExposureDetectionHistorySession:(id)a0 error:(id *)a1;

@end
