@class NSString, STEyeReliefViewModel, STGroupFetchedResultsController, NSNumber, NSManagedObjectID;
@protocol STPersistenceControllerProtocol;

@interface STEyeReliefViewModelCoordinator : NSObject <STEyeReliefViewModelCoordinator, STGroupFetchedResultsControllerDelegate>

@property (copy, nonatomic) NSNumber *userDSID;
@property (readonly, nonatomic) id<STPersistenceControllerProtocol> persistenceController;
@property (copy, nonatomic) NSManagedObjectID *userObjectID;
@property (retain, nonatomic) STGroupFetchedResultsController *fetchedResultsController;
@property (readonly) STEyeReliefViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)groupResultsController:(id)a0 didChangeResultsForRequest:(id)a1 objectID:(id)a2 changeType:(unsigned long long)a3;
- (void)_loadViewModel;
- (void)_loadViewModelWithContext:(id)a0;
- (void)_registerForPersistentStoreNotifications;
- (id)initWithPersistenceController:(id)a0 userDSID:(id)a1;
- (void)persistEyeReliefState:(BOOL)a0;
- (void)persistEyeReliefState:(BOOL)a0 withCompletionHandler:(id /* block */)a1;

@end
