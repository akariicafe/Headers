@interface MSPStorageTipsManager : NSObject {
    id _offlineOptimizeStorageEnabledListener;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)fetchProposedTipWithCompletionHandler:(id /* block */)a0;

@end
