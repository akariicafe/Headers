@class NSDictionary, NSArray, NSString;

@interface _LTDOfflineConfigurationModel : NSObject

@property (readonly, nonatomic) NSDictionary *root;
@property (readonly, nonatomic) NSDictionary *languagePairConfigs;
@property (readonly, nonatomic) BOOL hasCapabilityIdentifiers;
@property (readonly, nonatomic) long long pairAssetRequiredANECapability;
@property (readonly, nonatomic) NSArray *languagePairs;
@property (readonly, nonatomic) NSArray *languageIdentifiers;
@property (readonly, nonatomic) NSString *pairAssetConfigFile;
@property (readonly, nonatomic) NSArray *pairAssetList;

+ (BOOL)isPassthroughLocalePairIdentifier:(id)a0;
+ (id)passthroughConfiguration;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)_offlinePairConfigurationWithIdentifier:(id)a0 capability:(long long)a1;
- (id)offlinePairConfigurationWithIdentifier:(id)a0;

@end
