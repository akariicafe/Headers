@class CLInUseAssertion, BKSProcessAssertion, HDHealthStoreClient;

@interface _HDBackgroundRunningAssertion : HDAssertion {
    BOOL _shouldAcquireCLAssertion;
    HDHealthStoreClient *_client;
    BKSProcessAssertion *_bksAssertion;
    CLInUseAssertion *_coreLocationAssertion;
}

- (void).cxx_destruct;

@end
