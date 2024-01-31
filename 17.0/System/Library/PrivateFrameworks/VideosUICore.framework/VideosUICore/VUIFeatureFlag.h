@class NSString;

@interface VUIFeatureFlag : NSObject

@property (readonly, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) NSString *isEnabledByDefaultKey;
@property (readonly, nonatomic) NSString *featureName;
@property (readonly, nonatomic) NSString *featureDescription;
@property (readonly, nonatomic) NSString *defaultsKey;
@property (readonly, nonatomic) BOOL isAvailableForOS;
@property (readonly, nonatomic) BOOL isEnabledByDefault;
@property (nonatomic) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithFeatureDict:(id)a0;
- (BOOL)_enabledFromDefaults;

@end
