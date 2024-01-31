@class NSArray;

@interface MCAppleServicesPayload : MCPayload

@property (readonly, nonatomic) NSArray *hashDictionaries;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)stubDictionary;
- (id)subtitle1Label;

@end
