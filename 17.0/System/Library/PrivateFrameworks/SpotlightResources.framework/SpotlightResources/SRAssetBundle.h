@class NSArray, NSMutableDictionary, NSLocale;

@interface SRAssetBundle : NSObject {
    NSMutableDictionary *_contents;
}

@property (readonly, nonatomic) NSArray *contentTypes;
@property (readonly, nonatomic) NSLocale *locale;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)assetWithContentType:(id)a0 contentName:(id)a1;
- (id)assetsWithContentType:(id)a0;
- (void)loadAssetsWithContentType:(id)a0 contentName:(id)a1 contentPath:(id)a2;

@end
