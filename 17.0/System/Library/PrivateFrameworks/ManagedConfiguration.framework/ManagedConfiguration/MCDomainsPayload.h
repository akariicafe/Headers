@class NSDictionary;

@interface MCDomainsPayload : MCPayload

@property (retain, nonatomic) NSDictionary *restrictions;

+ (id)localizedSingularForm;
+ (id)tooManyEntriesErrorWithMaxCount:(id)a0 field:(id)a1;
+ (id)typeStrings;
+ (id)invalidDomainPatternErrorWithPattern:(id)a0 field:(id)a1;
+ (BOOL)isPatternValid:(id)a0 forField:(id)a1 outError:(id *)a2;
+ (id)localizedPluralForm;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end
