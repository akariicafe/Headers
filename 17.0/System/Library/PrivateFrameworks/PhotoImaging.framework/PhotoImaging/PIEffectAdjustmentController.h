@class NSString;

@interface PIEffectAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSString *kind;
@property (nonatomic) long long version;
@property (nonatomic) double intensity;

+ (id)versionKey;
+ (id)kindKey;
+ (id)intensityKey;

- (BOOL)isSettingEqual:(id)a0 forKey:(id)a1;

@end
