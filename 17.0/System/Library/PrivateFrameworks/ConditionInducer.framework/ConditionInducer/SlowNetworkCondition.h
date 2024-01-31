@class SlowNetworkUtil, NSString, NSDictionary;

@interface SlowNetworkCondition : COCondition

@property (nonatomic) BOOL running;
@property (retain, nonatomic) SlowNetworkUtil *util;
@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSDictionary *profileData;

+ (id)description;
+ (id)descriptionWithProfileParamsForProfile:(id)a0;

- (BOOL)isDestructive;
- (BOOL)setUp;
- (id)initWithProfile:(id)a0;
- (void)tearDown;
- (BOOL)active;
- (void).cxx_destruct;
- (id)identifierName;
- (BOOL)isInternalOnly;
- (BOOL)isNLCPrefPaneActive;
- (id)userFriendlyName;

@end
