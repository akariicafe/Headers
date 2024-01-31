@class BLServiceProxy;

@interface BLBookletMigrationStore : NSObject

@property (readonly, nonatomic) BLServiceProxy *serviceProxy;

- (id)init;
- (void).cxx_destruct;
- (void)migrationInfosWithState:(long long)a0 completion:(id /* block */)a1;
- (void)migrationInfosWithStates:(id)a0 completion:(id /* block */)a1;
- (void)migrationInfosWithStoreIDs:(id)a0 completion:(id /* block */)a1;
- (BOOL)removeAllMigrationInfosExcludingStates:(id)a0 error:(out id *)a1;
- (BOOL)setMigrationState:(long long)a0 forStoreIDs:(id)a1 error:(out id *)a2;

@end
