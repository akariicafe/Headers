@class NSArray;

@interface WBSWebExtensionWebAccessibleResources : NSObject

@property (readonly, nonatomic) NSArray *matchPatternStrings;
@property (readonly, nonatomic) NSArray *resourceNames;

- (void).cxx_destruct;
- (void)_populateWebAccessibleResources:(id)a0 errorStrings:(id *)a1;
- (id)_regexStringFromPath:(id)a0;
- (id)initWithManifestV2Array:(id)a0 errorString:(id *)a1;
- (id)initWithManifestV3Dictionary:(id)a0 errorStrings:(id *)a1 matchPatternException:(id *)a2;

@end
