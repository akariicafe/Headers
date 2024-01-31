@class PFAssetBundle;

@interface PHImportAssetBundleAsset : PHImportAsset

@property (retain, nonatomic) PFAssetBundle *assetBundle;

- (id)creationDate;
- (id)timeZone;
- (void).cxx_destruct;
- (id)title;
- (id)accessibilityDescription;
- (id)assetDescription;
- (id)initWithAssetBundleAtURL:(id)a0 withImportSource:(id)a1;
- (id)keywordTitles;

@end
