@class NSMutableArray, NSMutableDictionary;

@interface AVTAssetLibrary : NSObject {
    NSMutableArray *_assets[38];
    NSMutableDictionary *_assetsByName[38];
}

+ (id)sharedAssetLibrary;

- (void)reload;
- (void).cxx_destruct;
- (id)assetWithType:(long long)a0 identifier:(id)a1;

@end
