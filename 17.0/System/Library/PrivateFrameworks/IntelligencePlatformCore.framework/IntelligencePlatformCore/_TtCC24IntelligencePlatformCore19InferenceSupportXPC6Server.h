@interface _TtCC24IntelligencePlatformCore19InferenceSupportXPC6Server : NSObject <GDInferenceSupportXPCProtocol> {
    void /* unknown type, empty encoding */ jsonEncoder;
    void /* unknown type, empty encoding */ jsonDecoder;
    void /* unknown type, empty encoding */ assetRegistryXPCBaseServer;
}

- (id)init;
- (void).cxx_destruct;
- (void)assetEntryResultDataForAssetId:(id)a0 inDomainId:(id)a1 remoteOptionsData:(id)a2 completion:(id /* block */)a3;

@end
