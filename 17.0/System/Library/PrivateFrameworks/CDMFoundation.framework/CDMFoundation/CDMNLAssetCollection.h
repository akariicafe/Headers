@class NSString, NSDictionary;

@interface CDMNLAssetCollection : NSObject

@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSDictionary *assetPaths;

+ (id)assetCollectionWithAssetPaths:(id)a0 withLanguageCode:(id)a1;

- (void).cxx_destruct;
- (id)_initWithAssetPaths:(id)a0 withLanguageCode:(id)a1;
- (id)getAssetBundlePathForFactorName:(id)a0;
- (id)getAssetForFactorName:(id)a0;
- (id)getAssetPaths;

@end
