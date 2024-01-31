@class NSArray, NSString, NSData, NSDictionary;

@interface DMCObliterationShelter : NSObject

@property (nonatomic) BOOL hasConfigFile;
@property (copy, nonatomic) NSArray *languageStrings;
@property (copy, nonatomic) NSString *localeString;
@property (retain, nonatomic) NSData *wifiProfileData;
@property (retain, nonatomic) NSData *mdmProfileData;
@property (retain, nonatomic) NSDictionary *cloudConfigurationDetails;

- (BOOL)clear;
- (void).cxx_destruct;
- (id)_mdmProfilePath;
- (id)_allPossiblePaths;
- (id)_cloudConfigProfilePath;
- (id)_configurationDictionaryPath;
- (id)_generateConfigurationDictionary;
- (id)_wifiProfilePath;
- (id)generateExclusionPaths;
- (BOOL)preserveWithError:(id *)a0;
- (BOOL)retrieveWithError:(id *)a0;

@end
