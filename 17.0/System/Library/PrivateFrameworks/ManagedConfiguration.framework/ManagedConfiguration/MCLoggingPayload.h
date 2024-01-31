@class NSDictionary;

@interface MCLoggingPayload : MCPayload

@property (readonly, nonatomic) NSDictionary *loggingPayload;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (void).cxx_destruct;
- (id)title;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (BOOL)isAllowedToWriteLogging;
- (id)stubDictionary;

@end
