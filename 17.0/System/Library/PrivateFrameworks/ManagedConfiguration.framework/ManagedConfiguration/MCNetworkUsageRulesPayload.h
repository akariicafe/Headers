@class NSArray;

@interface MCNetworkUsageRulesPayload : MCPayload

@property (copy, nonatomic) NSArray *applicationRules;
@property (copy, nonatomic) NSArray *SIMRules;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end
