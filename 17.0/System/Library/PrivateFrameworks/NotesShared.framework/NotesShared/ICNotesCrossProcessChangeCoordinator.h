@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ICNotesCrossProcessChangeCoordinator : NSObject

@property (retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator;
@property (retain, nonatomic) NSManagedObjectContext *destinationContext;

- (void)dealloc;
- (void)registerForAccountNotifications;
- (void)postCrossProcessNotificationName:(id)a0;
- (id)initWithSourceCoordinator:(id)a0 destinationContext:(id)a1;
- (void)registerForEditorExtensionDidSaveNotificationWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)postEditorExtensionDidSaveNotification;
- (void)registerForCrossProcessNotificationName:(id)a0 block:(id /* block */)a1;
- (void)postAccountDidChangeNotification;

@end
