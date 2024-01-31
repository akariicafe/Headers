@class NSString;

@interface DDSMobileAssetv2ProviderDataSource : NSObject <DDSMobileAssetv2ProviderDataSource>

@property (readonly) long long linguisticAssetCompatabilityVersion;
@property (readonly) long long mecabraDictionaryRapidUpdatesAssetCompatabilityVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)compatabilityVersionFromFileWithName:(id)a0;
- (id)maAssetQueryForDDSAssetQuery:(id)a0 compatabilityVersion:(long long)a1 platformVersion:(id)a2 internalInstall:(BOOL)a3;

@end
