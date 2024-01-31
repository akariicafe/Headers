@class NSString, NSPersistentContainer, NSManagedObjectContext;

@interface HMMCoreDataCounterStorage : NSObject {
    long long _currentContextToken;
    NSManagedObjectContext *_currentContext;
    long long _persistentContainerToken;
    NSPersistentContainer *_persistentContainer;
}

@property (readonly, nonatomic) NSString *dataModelName;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSPersistentContainer *persistentContainer;

- (void)save;
- (void).cxx_destruct;
- (id)currentContext;
- (void)executeWithManagedObjectContext:(id /* block */)a0;
- (void)executeWithManagedObjectContextAndWait:(id /* block */)a0;
- (id)initWithModelName:(id)a0 atPath:(id)a1;

@end
