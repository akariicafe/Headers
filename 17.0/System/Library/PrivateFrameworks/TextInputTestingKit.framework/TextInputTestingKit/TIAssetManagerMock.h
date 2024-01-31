@class NSString;

@interface TIAssetManagerMock : NSObject <TIAssetManaging>

@property (copy, nonatomic) id /* block */ enabledInputModeIdentifiersProviderBlock;
@property (copy, nonatomic) id /* block */ preferencesProviderBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)topActiveRegions;
- (void)requestAssetDownloadForLanguage:(id)a0 completion:(id /* block */)a1;
- (void)ddsAssetsForInputMode:(id)a0 cachedOnly:(BOOL)a1 completion:(id /* block */)a2;
- (id)ddsAssetContentItemsWithContentType:(id)a0 inputMode:(id)a1 filteredWithRegion:(BOOL)a2;
- (id)enabledInputModes;
- (void).cxx_destruct;
- (void)fetchAssetUpdateStatusForInputModeIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)addLinguisticAssetsAssertionForLanguage:(id)a0 assertionID:(id)a1 region:(id)a2 clientID:(id)a3 withHandler:(id /* block */)a4;
- (void)ddsAssetContentItemsWithContentType:(id)a0 inputMode:(id)a1 filteredWithRegion:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateAssetForInputModeIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)a0 forClientID:(id)a1 withHandler:(id /* block */)a2;

@end
