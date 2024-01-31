@class NSManagedObjectContext, NSPersistentStore, NSPersistentStoreCoordinator;

@interface RKRankingDataManager : NSObject

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (retain, nonatomic) NSPersistentStore *persistentStore;

- (void).cxx_destruct;
- (id)fetchRankingInfoForCategory:(id)a0;
- (id)fetchRankingInfoFromDB;
- (void)flushRankingData;
- (unsigned long long)getNumberOfEntriesInDB;
- (id)initWithDatabaseFilename:(id)a0;
- (id)initWithLanguageID:(id)a0;
- (void)insertRankingInfoFromDictionary:(id)a0;
- (void)insertRankingInfoFromDictionary:(id)a0 withDate:(id)a1;
- (void)pruneUserDatabase;
- (void)resetRankingData;

@end
