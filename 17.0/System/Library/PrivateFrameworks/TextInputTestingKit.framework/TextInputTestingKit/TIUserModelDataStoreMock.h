@class NSString, NSMutableDictionary, NSDate, NSMutableArray;

@interface TIUserModelDataStoreMock : NSObject <TIUserModelDataStoring> {
    NSMutableArray *_database;
    NSMutableDictionary *_durableDatabase;
}

@property (retain) NSDate *propertiesLastMigrationDate;
@property (retain) NSDate *durableLastMigrationDate;
@property (retain) NSDate *transientLastMigrationDate;
@property (readonly) BOOL isValid;
@property (readonly) int propertiesVersion;
@property (readonly) int durableVersion;
@property (readonly) int transientVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (id)init;
- (id)getAllValuesForKey:(id)a0 forInputMode:(id)a1 sinceDate:(id)a2;
- (id)getAllKnownInputModesSinceDate:(id)a0;
- (id)getDailyAndWeeklyValuesForKeyPrefix:(id)a0 forInputMode:(id)a1 weeklyKeySuffixes:(id)a2 endDate:(id)a3;
- (void).cxx_destruct;
- (id)getAllValuesForKey:(id)a0 forInputMode:(id)a1 fromDate:(id)a2 toDate:(id)a3;
- (id)getAllKnownInputModes;
- (id)getDurableValueForKey:(id)a0;
- (BOOL)updateDurableValue:(id)a0 forKey:(id)a1 forDate:(id)a2;
- (id)getInputModesForKey:(id)a0;
- (BOOL)setDurableValue:(id)a0 forKey:(id)a1 forDate:(id)a2;
- (BOOL)purgeDataForKeyPrefix:(id)a0 forInputMode:(id)a1 beforeDate:(id)a2;
- (id)getAllValuesForKeyPrefix:(id)a0 forInputMode:(id)a1 sinceDate:(id)a2;
- (BOOL)purgeDataForKey:(id)a0 forInputMode:(id)a1 beforeDate:(id)a2;
- (BOOL)addValue:(id)a0 andSecondaryValue:(id)a1 andRealValue:(id)a2 andProperties:(id)a3 forKey:(id)a4 forInputMode:(id)a5 forDate:(id)a6;

@end
