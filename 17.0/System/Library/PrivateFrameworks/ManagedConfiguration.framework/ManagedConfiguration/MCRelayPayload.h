@class NSDictionary, NSArray, NSString;

@interface MCRelayPayload : MCPayload

@property (readonly, copy, nonatomic) NSDictionary *configurationDictionary;
@property (readonly, copy, nonatomic) NSArray *relays;
@property (readonly, copy, nonatomic) NSArray *matchDomains;
@property (readonly, copy, nonatomic) NSArray *excludedDomains;
@property (copy, nonatomic) NSString *relayUUID;
@property (readonly, copy, nonatomic) NSArray *onDemandRules;
@property (readonly, nonatomic) BOOL restrictDomains;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)filterForUserEnrollmentOutError:(id *)a0;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end
