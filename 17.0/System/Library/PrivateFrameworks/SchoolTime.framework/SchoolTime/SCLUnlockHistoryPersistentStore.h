@class NSManagedObjectContext, NSURL, NSPersistentContainer;

@interface SCLUnlockHistoryPersistentStore : NSObject

@property (retain) NSManagedObjectContext *storeContext;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSPersistentContainer *persistentContainer;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (BOOL)insertItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)deleteHistory:(id *)a0;
- (void)loadStore;
- (BOOL)purgeOldItems;
- (id)recentHistoryItems;
- (id)recentItemsThresholdDate;

@end
