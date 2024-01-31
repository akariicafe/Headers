@class MCMManagedUserPathRegistry;

@interface MCMLibraryRepairForUser : MCMLibraryRepair

@property (readonly, nonatomic) MCMManagedUserPathRegistry *userRegistry;

- (id)_setByAddingContainerClassPathsToSet:(id)a0 registry:(id)a1;
- (id)_managedPathFromContainerClassPath:(id)a0 registry:(id)a1;
- (BOOL)fixAndRetryIfPermissionsErrorWithURL:(id)a0 containerRootURL:(id)a1 error:(id *)a2 duringBlock:(id /* block */)a3;
- (BOOL)fixAndRetryIfPermissionsErrorWithURL:(id)a0 containerPath:(id)a1 containerIdentifier:(id)a2 error:(id *)a3 duringBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithManagedUserPathRegistry:(id)a0 fileManager:(id)a1;
- (id)_managedPathsForGenericRepair;
- (BOOL)performRepairForContainerPath:(id)a0 containerIdentifier:(id)a1 error:(id *)a2;
- (BOOL)_canRepairLocally;

@end
