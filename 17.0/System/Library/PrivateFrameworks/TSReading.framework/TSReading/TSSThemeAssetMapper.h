@class TSSTheme, TSUCustomCallBackDictionary;

@interface TSSThemeAssetMapper : NSObject {
    TSUCustomCallBackDictionary *mAssetMap;
}

@property (readonly, nonatomic) TSSTheme *fromTheme;
@property (readonly, nonatomic) TSSTheme *toTheme;

- (id)init;
- (void)dealloc;
- (void)cacheAssetMappings:(id)a0;
- (void)cacheMappingFromAsset:(id)a0 toAsset:(id)a1;
- (void)clearMappingCache;
- (id)initWithFromTheme:(id)a0 toTheme:(id)a1;
- (id)mapPresetsWithKindFromPreset:(id)a0;
- (id)mapStyle:(id)a0;
- (id)mappedAssetForAsset:(id)a0;
- (BOOL)p_hasCachedMappingsForPresetsOfKind:(id)a0;

@end
