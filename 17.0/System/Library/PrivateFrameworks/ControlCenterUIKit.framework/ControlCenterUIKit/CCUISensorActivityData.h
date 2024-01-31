@class NSString, UIColor;

@interface CCUISensorActivityData : NSObject <NSCopying>

@property (nonatomic) unsigned long long sensorType;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *executableDisplayName;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *attributionGroup;
@property (copy, nonatomic) NSString *website;
@property (nonatomic) BOOL isSystemService;
@property (nonatomic) BOOL usedRecently;
@property (retain, nonatomic) UIColor *sensorIndicatorColor;
@property (nonatomic) BOOL launchToSettings;

+ (id)_genericLocationSystemServiceActivity;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
