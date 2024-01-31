@class PHAsset, PGGraphYearNodeCollection, NSSet, PGTitleGenerationContext, PHAssetCollection, PGTitleGeneratorDateMatching, NSLocale, PGTitle, PHFetchResult;

@interface PGTitleGenerator : NSObject {
    PHFetchResult *_curatedAssets;
}

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) NSSet *momentNodes;
@property (retain, nonatomic) NSSet *usedLocationNodes;
@property (readonly, nonatomic) PGTitleGeneratorDateMatching *dateMatching;
@property (readonly, nonatomic) PHAsset *keyAsset;
@property (readonly, nonatomic) PHAssetCollection *curatedAssetCollection;
@property (readonly, nonatomic) PGTitleGenerationContext *titleGenerationContext;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) PGGraphYearNodeCollection *featuredYearNodes;
@property (readonly, nonatomic) PGTitle *title;
@property (readonly, nonatomic) PGTitle *subtitle;
@property (nonatomic) unsigned long long preferredTitleType;
@property (nonatomic) unsigned long long lineBreakBehavior;
@property (nonatomic) BOOL isForHighlight;

- (void).cxx_destruct;
- (id)_defaultTitle;
- (id)_addressNodeFromKeyAsset;
- (id)_addressNodesFromCuratedAssetCollection;
- (unsigned long long)_allowedTimeTitleFormats;
- (id)_defaultLocationTitle;
- (id)_defaultTimeTitle;
- (id)_fetchAssetsFromCuratedAssetCollection;
- (void)_generateTitleAndSubtitle;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (double)_ratioOfAssetsWithoutLocation;
- (id)_splitTimeTitles;
- (BOOL)_triggerDefaultTitleGenerationIfNil;
- (BOOL)_useSplitTimeTitlesIfNeeded;
- (id)initWithMomentNode:(id)a0 referenceDateInterval:(id)a1 keyAsset:(id)a2 curatedAssetCollection:(id)a3 assetCollection:(id)a4 type:(long long)a5 titleGenerationContext:(id)a6;
- (id)initWithMomentNode:(id)a0 type:(long long)a1 titleGenerationContext:(id)a2;
- (id)initWithMomentNodes:(id)a0 referenceDateInterval:(id)a1 keyAsset:(id)a2 curatedAssetCollection:(id)a3 assetCollection:(id)a4 type:(long long)a5 titleGenerationContext:(id)a6;
- (id)initWithMomentNodes:(id)a0 type:(long long)a1 titleGenerationContext:(id)a2;

@end
