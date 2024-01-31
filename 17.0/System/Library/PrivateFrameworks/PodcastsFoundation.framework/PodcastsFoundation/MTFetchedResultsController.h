@class NSFetchedResultsController, NSArray, NSString, NSMutableDictionary, NSMutableArray, NSFetchRequest, NSManagedObjectContext;
@protocol NSFetchedResultsControllerDelegate;

@interface MTFetchedResultsController : NSObject <NSFetchedResultsControllerDelegate, MTFetchedResultsControllerProtocol> {
    NSFetchedResultsController *_frc;
    NSMutableDictionary *_propertyCache;
    NSMutableArray *_changes;
}

@property (readonly, nonatomic) NSFetchRequest *fetchRequest;
@property (copy, nonatomic) NSArray *propertyKeys;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSArray *fetchedObjects;
@property (readonly, nonatomic) NSArray *sections;
@property (weak, nonatomic) id<NSFetchedResultsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controllerDidChangeContent:(id)a0;
- (void)controller:(id)a0 didChangeObject:(id)a1 atIndexPath:(id)a2 forChangeType:(unsigned long long)a3 newIndexPath:(id)a4;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(id)a0;
- (void)controllerWillChangeContent:(id)a0;
- (id)initWithFetchRequest:(id)a0 managedObjectContext:(id)a1 sectionNameKeyPath:(id)a2 cacheName:(id)a3;
- (BOOL)performFetch:(id *)a0;
- (id)indexPathForObject:(id)a0;
- (id)_dictionaryForObject:(id)a0;
- (id)_dictionaryFromCacheForObjectID:(id)a0;
- (BOOL)_hasManagedObjectChanged:(id)a0;
- (void)_removeObjectFromCacheWithId:(id)a0;
- (void)_updateCacheWithManagedObject:(id)a0;

@end
