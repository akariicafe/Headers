@class NSDictionary;

@interface MCDefaultsPayload : MCPayload {
    NSDictionary *_defaultsByDomain;
}

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)title;
- (id)domains;
- (id)defaultsForDomain:(id)a0;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (BOOL)isAllowedToWriteDefaults;
- (id)stubDictionary;

@end
