@class NSPersistentContainer, NSManagedObjectContext;

@interface AMDCoreDataPersistentContainer : NSObject

@property (retain, nonatomic) NSPersistentContainer *_container;
@property (retain, nonatomic) NSManagedObjectContext *_moc;

+ (id)sharedContainer;

- (void)save:(id *)a0;
- (id)getManagedObjectContext;
- (void).cxx_destruct;

@end
