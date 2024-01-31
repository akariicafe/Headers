@interface MIRelocatedBundleContainer : MIBundleContainer

- (unsigned long long)diskUsage;
- (BOOL)makeContainerLiveReplacingContainer:(id)a0 reason:(unsigned long long)a1 waitForDeletion:(BOOL)a2 withError:(id *)a3;
- (BOOL)makeContainerLiveWithError:(id *)a0;
- (BOOL)purgeContentWithError:(id *)a0;
- (BOOL)regenerateDirectoryUUIDWithError:(id *)a0;
- (BOOL)shouldHaveCorrespondingDataContainer;

@end
