@interface _TtCC24IntelligencePlatformCore16AssetRegistryXPC10BaseServer : NSObject <GDAssetRegistryXPCBaseProtocol> {
    void /* unknown type, empty encoding */ jsonEncoder;
    void /* unknown type, empty encoding */ jsonDecoder;
    void /* unknown type, empty encoding */ assetRegistryServer;
}

- (id)init;
- (void).cxx_destruct;
- (void)assetEntryResultDataForAssetId:(id)a0 inDomainId:(id)a1 remoteOptionsData:(id)a2 completion:(id /* block */)a3;

@end
