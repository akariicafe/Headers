@interface PLCTMPairingProcessor : PLPairingProcessor

@property (nonatomic) BOOL deferredProcessingNeeded;

- (BOOL)_copyResourcesFromSoc:(id)a0 toPrimary:(id)a1 error:(id *)a2;
- (void)_installSocResourcesFromSoc:(id)a0 toPrimary:(id)a1 referencedResourceURLs:(id)a2;
- (id)_mapResourcesFromSoc:(id)a0 toPrimary:(id)a1 error:(id *)a2;
- (id)combinePair:(id)a0 error:(id *)a1;
- (id)ctmFetchRequestWithPredicate:(id)a0;
- (id)fetchRequestForLibrary;
- (id)fetchRequestForSortedGroupIDs:(id)a0;
- (id)firstGroupFromAssets:(id)a0;
- (id)groupIDForAsset:(id)a0;
- (void)setDeferredProcessingIfNescessaryForAsset:(id)a0;

@end
