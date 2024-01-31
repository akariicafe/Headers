@class NSURL, NSDictionary, MagnifierAssetsManager;

@interface MagnifierModelsManager : NSObject <MagnifierAssetsManagerDelegate> {
    NSURL *_doorAttributesClassiferUncompiledModelPath;
    NSDictionary *_doorAttributesClassifierAssetProperties;
    NSURL *_signDetectorUncompiledModelPath;
    NSDictionary *_signDetectorAssetProperties;
}

@property (readonly, nonatomic) NSURL *doorAttributesClassifierModelPath;
@property (readonly, nonatomic) NSDictionary *doorAttributesClassifierProperties;
@property (readonly, nonatomic) NSURL *signDetectorModelPath;
@property (readonly, nonatomic) NSDictionary *signDetectorProperties;
@property (retain, nonatomic) MagnifierAssetsManager *downloadManager;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)updateAssetURLs;

@end
