@class BLServiceProxy;

@interface BLMetadataStore : NSObject

@property (readonly, nonatomic) BLServiceProxy *serviceProxy;

- (id)init;
- (void).cxx_destruct;
- (void)racGUIDForStoreID:(long long)a0 result:(id /* block */)a1;
- (BOOL)removeRacGUIDForStoreID:(long long)a0 error:(out id *)a1;
- (BOOL)setRacGUID:(id)a0 forStoreID:(long long)a1 error:(out id *)a2;

@end
