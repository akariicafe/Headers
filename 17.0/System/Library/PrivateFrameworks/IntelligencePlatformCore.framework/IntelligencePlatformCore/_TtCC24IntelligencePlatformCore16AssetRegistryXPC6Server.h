@interface _TtCC24IntelligencePlatformCore16AssetRegistryXPC6Server : NSObject <GDAssetRegistryXPCProtocol> {
    void /* unknown type, empty encoding */ baseServer;
    void /* unknown type, empty encoding */ entitlementInfo;
}

- (id)init;
- (void).cxx_destruct;
- (void)assetEntryResultDataForAssetId:(id)a0 inDomainId:(id)a1 remoteOptionsData:(id)a2 completion:(id /* block */)a3;
- (void)overrideAssetEntryForAssetId:(id)a0 inDomainId:(id)a1 overrideAssetEntryParametersData:(id)a2 completion:(id /* block */)a3;

@end
