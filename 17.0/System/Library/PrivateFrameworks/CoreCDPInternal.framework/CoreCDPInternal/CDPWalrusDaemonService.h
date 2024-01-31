@class CDPInternalWalrusStateController;

@interface CDPWalrusDaemonService : NSObject {
    unsigned long long _entitlements;
}

@property (retain, nonatomic) CDPInternalWalrusStateController *walrusStateController;

- (BOOL)_allowWalrusAccess;
- (id)initWithEntitlements:(unsigned long long)a0;
- (id)initWithEntitlements:(unsigned long long)a0 walrusController:(id)a1;
- (oneway void)updateWebAccessStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (oneway void)updateWalrusStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)_allowWalrusPCSKeysAccess;
- (oneway void)repairWalrusWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (oneway void)pcsKeysForServices:(id)a0 completion:(id /* block */)a1;
- (oneway void)broadcastWalrusStateChange;
- (id)defaultWalrusStateController;
- (oneway void)webAccessStatusWithCompletion:(id /* block */)a0;
- (oneway void)walrusStatusWithContext:(id)a0 completion:(id /* block */)a1;

@end
