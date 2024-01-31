@class NSString, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface TIUserModelDataStore : NSObject <TIUserModelDataStoring> {
    NSString *_path;
    struct sqlite3 { } *_user_model_db;
    BOOL _user_model_db_failed;
    NSObject<OS_dispatch_queue> *_database_queue;
}

@property (readonly) BOOL isValid;
@property (readonly) int propertiesVersion;
@property (readonly) int durableVersion;
@property (readonly) int transientVersion;
@property (readonly) NSDate *propertiesLastMigrationDate;
@property (readonly) NSDate *durableLastMigrationDate;
@property (readonly) NSDate *transientLastMigrationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initializeDataStoreAtPath:(id)a0;

- (id)initWithPath:(id)a0;
- (id)durableMigrationFromV3Schema;
- (BOOL)createOrOpenDatabase;
- (void)dealloc;
- (id)transientMigrationSchemaForDatabase:(struct sqlite3 { } *)a0;
- (id)getAllValuesForKey:(id)a0 forInputMode:(id)a1 sinceDate:(id)a2;
- (int)durableVersionFromDatabase:(struct sqlite3 { } *)a0;
- (id)durableResetSchema;
- (id)propertiesMigrationFromV1Schema;
- (BOOL)closeDatabase;
- (id)durableLastMigrationDateFromDatabase:(struct sqlite3 { } *)a0;
- (id)propertiesMigrationSchemaForDatabase:(struct sqlite3 { } *)a0;
- (id)lastMigrationDateForKey:(id)a0 fromDatabase:(struct sqlite3 { } *)a1;
- (id)transientCreationSchema;
- (id)getAllKnownInputModesSinceDate:(id)a0;
- (BOOL)purgeDurableDataForKeyPrefix:(id)a0;
- (id)getDailyAndWeeklyValuesForKeyPrefix:(id)a0 forInputMode:(id)a1 weeklyKeySuffixes:(id)a2 endDate:(id)a3;
- (int)propertiesVersionFromDatabase:(struct sqlite3 { } *)a0;
- (void).cxx_destruct;
- (id)propertiesLastMigrationDateFromDatabase:(struct sqlite3 { } *)a0;
- (id)propertiesCreationSchema;
- (BOOL)isDatabaseValid;
- (id)getAllValuesForKey:(id)a0 forInputMode:(id)a1 fromDate:(id)a2 toDate:(id)a3;
- (BOOL)_updateDurableValue:(id)a0 forKey:(id)a1 forDate:(id)a2 withUpdateQuery:(const char *)a3;
- (id)getAllKnownInputModes;
- (id)durableCreationSchema;
- (id)getDurableValueForKey:(id)a0;
- (id)durableMigrationSchemaForDatabase:(struct sqlite3 { } *)a0;
- (BOOL)updateDurableValue:(id)a0 forKey:(id)a1 forDate:(id)a2;
- (id)getInputModesForKey:(id)a0;
- (int)transientVersionFromDatabase:(struct sqlite3 { } *)a0;
- (BOOL)setDurableValue:(id)a0 forKey:(id)a1 forDate:(id)a2;
- (int)versionForKey:(id)a0 fromDatabase:(struct sqlite3 { } *)a1;
- (id)transientResetSchema;
- (BOOL)purgeDataForKeyPrefix:(id)a0 forInputMode:(id)a1 beforeDate:(id)a2;
- (id)transientLastMigrationDateFromDatabase:(struct sqlite3 { } *)a0;
- (id)getAllValuesForKeyPrefix:(id)a0 forInputMode:(id)a1 sinceDate:(id)a2;
- (id)durableMigrationFromV2Schema;
- (BOOL)purgeDataForKey:(id)a0 forInputMode:(id)a1 beforeDate:(id)a2;
- (BOOL)addValue:(id)a0 andSecondaryValue:(id)a1 andRealValue:(id)a2 andProperties:(id)a3 forKey:(id)a4 forInputMode:(id)a5 forDate:(id)a6;

@end
