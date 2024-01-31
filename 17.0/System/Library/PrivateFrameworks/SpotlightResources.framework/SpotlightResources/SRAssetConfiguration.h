@class NSMutableDictionary;

@interface SRAssetConfiguration : NSObject {
    NSMutableDictionary *_properties;
    NSMutableDictionary *_contentTypeMap;
    NSMutableDictionary *_assetTypeMap;
    NSMutableDictionary *_clientMap;
}

+ (id)configuration;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)assetTypes;
- (id)contentTypesForClient:(id)a0;
- (void)setProperties:(id)a0 client:(id)a1;

@end
