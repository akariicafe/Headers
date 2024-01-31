@class NSManagedObjectContext, NSPersistentContainer;

@interface VSPersistentContainer : NSObject

@property (retain, nonatomic) NSManagedObjectContext *viewContext;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (readonly, nonatomic) long long modelVersion;

+ (id)directoryURL;
+ (id)legacyDirectoryURL;

- (id)init;
- (id)initWithModelVersion:(long long)a0;
- (id)insertDeveloperIdentityProviderInContext:(id)a0;
- (void)migrateContainerIfNecessary;
- (id)developerIdentityProviderFetchRequest;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;

@end
