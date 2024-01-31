@class NSString, NSDictionary;

@interface MCSharedDeviceConfigurationPayload : MCPayload

@property (readonly, nonatomic) NSString *lockScreenFootnote;
@property (readonly, nonatomic) NSString *assetTagInformation;
@property (readonly, nonatomic) NSDictionary *configuration;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end
