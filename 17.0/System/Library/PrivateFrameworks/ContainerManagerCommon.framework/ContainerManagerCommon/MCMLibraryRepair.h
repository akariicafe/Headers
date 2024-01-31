@class MCMManagedPathRegistry;
@protocol MCMFileManager;

@interface MCMLibraryRepair : NSObject

@property (readonly, nonatomic) MCMManagedPathRegistry *registry;
@property (nonatomic) BOOL pathsCreated;
@property (readonly, nonatomic) id<MCMFileManager> fileManager;

- (BOOL)createPathsIfNecessaryWithError:(id *)a0;
- (id)initWithManagedPathRegistry:(id)a0 fileManager:(id)a1;
- (BOOL)fixAndRetryIfPermissionsErrorWithURL:(id)a0 error:(id *)a1 duringBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_managedPathsForGenericRepair;
- (BOOL)performGenericRepairWithError:(id *)a0;
- (BOOL)managedPathsHaveChanged;
- (BOOL)fixPermissionsWithManagedPath:(id)a0 uid:(unsigned int)a1 gid:(unsigned int)a2 error:(id *)a3;
- (BOOL)_canRepairLocally;

@end
