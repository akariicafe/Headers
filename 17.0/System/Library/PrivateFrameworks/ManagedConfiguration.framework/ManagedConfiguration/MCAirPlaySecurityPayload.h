@class NSString;

@interface MCAirPlaySecurityPayload : MCPayload

@property (retain, nonatomic) NSString *accessType;
@property (retain, nonatomic) NSString *securityType;
@property (retain, nonatomic) NSString *password;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (id)verboseDescription;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end
