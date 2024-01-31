@class NSString;

@interface MCRemovalPasswordPayload : MCPayload

@property (retain, nonatomic) NSString *removalPasscode;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)stubDictionary;

@end
