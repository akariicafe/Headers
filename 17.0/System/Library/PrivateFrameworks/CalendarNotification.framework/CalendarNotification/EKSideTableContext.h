@class NSString;

@interface EKSideTableContext : NSManagedObjectContext {
    NSString *_path;
}

+ (id)sideTableContext;

- (id)_persistentStoreCoordinator;
- (id)_settingForKey:(id)a0;
- (id)insertNewAlarm;
- (id)rootDirectory;
- (id)alarmsBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)settingForKey:(id)a0;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (id)_alarmsMatchingPredicate:(id)a0;
- (id)_urlForPersistentStore;
- (id)_managedObjectModel;
- (id)_pathForPersistentStore;
- (void).cxx_destruct;
- (id)nextAlarmFireTime;
- (BOOL)_removeSqliteFiles;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (void)deleteAllAlarms;

@end
