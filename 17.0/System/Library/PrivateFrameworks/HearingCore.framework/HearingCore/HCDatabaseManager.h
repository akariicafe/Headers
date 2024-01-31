@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject {
    int _contentProtectionNotifyToken;
}

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

- (void)logMessage:(id)a0;
- (id)init;
- (void)dealloc;
- (id)databaseFilePath;
- (id)containerIdentifier;
- (id)cloudKitContainer;
- (id)apsConnectionMachServiceName;
- (void).cxx_destruct;
- (void)setupDatabase;
- (id)managedObjectModelName;
- (void)contentDidUpdate:(id)a0;
- (BOOL)saveIfPossible;
- (void)storesWillChange:(id)a0;

@end
