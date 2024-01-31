@class AnalyticsPersistenceManager, AnalyticsStoreMOContext;

@interface AnalyticsStoreMOHandler : NSObject

@property (retain, nonatomic) AnalyticsStoreMOContext *storeMOContext;
@property (retain, nonatomic) AnalyticsPersistenceManager *persistenceManager;
@property (nonatomic) unsigned long long storeType;

- (id)managedObjectContext;
- (void)saveManagedObjectContext;
- (void)performBlockOnManagedObjectContextForNSData:(id)a0 withDate:(id)a1 block:(id /* block */)a2;
- (BOOL)setNetworkManagedObjectPropertyValueForKeyWithoutSave:(id)a0 forKey:(id)a1 withValue:(id)a2;
- (void)updateManagedObjectContextWithoutSave;
- (void)ageOutManagedObjectsOlderThan:(double)a0;
- (void)performBlockOnManagedObjectContext:(id)a0 block:(id /* block */)a1;
- (void)performPruneBasedOnStoreSizeAndSave;
- (void)pruneManagedObjects;
- (void).cxx_destruct;
- (BOOL)setBssManagedObjectPropertyValueForKeyWithoutSave:(id)a0 forKey:(id)a1 withValue:(id)a2;
- (id)initWithType:(unsigned long long)a0 options:(unsigned long long)a1;

@end
