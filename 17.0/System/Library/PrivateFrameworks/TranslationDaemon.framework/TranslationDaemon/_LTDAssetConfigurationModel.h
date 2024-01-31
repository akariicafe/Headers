@class NSDictionary, NSString, NSArray;

@interface _LTDAssetConfigurationModel : NSObject

@property (retain, nonatomic) NSDictionary *root;
@property (readonly, nonatomic) NSString *config;
@property (readonly, nonatomic) NSArray *speechTranslationAssetTypes;
@property (readonly, nonatomic) NSArray *speechEndpointAssetTypes;
@property (readonly, nonatomic) NSArray *assetDirectoryNames;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)currentAssetDirectoryName;
- (id)currentEndpointAssetType;
- (id)currentSpeechTranslationAssetType;

@end
