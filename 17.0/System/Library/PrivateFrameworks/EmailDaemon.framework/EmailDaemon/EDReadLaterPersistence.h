@class EDReadLaterCloudStorage, EDPersistenceDatabase, EDPersistenceHookRegistry;

@interface EDReadLaterPersistence : NSObject <EDReadLaterCloudStorageDateProvider>

@property (retain, nonatomic) EDPersistenceDatabase *database;
@property (retain, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (retain, nonatomic) EDReadLaterCloudStorage *cloudStorage;

- (id)initWithDatabase:(id)a0 hookRegistry:(id)a1;
- (void)scheduleRecurringActivity;
- (id)cloudStorageReadLaterDateForMessage:(id)a0 displayDate:(id *)a1;
- (void).cxx_destruct;
- (void)_persistReadLater:(id)a0 date:(id)a1;
- (void)_resetDisplayDateForMessage:(id)a0 connection:(id)a1;
- (void)persistReadLaterForMessage:(id)a0 date:(id)a1;
- (void)removeReadLaterForMessage:(id)a0;

@end
