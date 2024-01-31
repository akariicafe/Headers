@class NSArray;

@interface MCCertificateTransparencyPayload : MCPayload

@property (readonly, nonatomic) NSArray *hashDictionaries;
@property (readonly, nonatomic) NSArray *domainRules;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (BOOL)isValidDomainRule:(id)a0;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)stubDictionary;
- (id)subtitle1Label;

@end
