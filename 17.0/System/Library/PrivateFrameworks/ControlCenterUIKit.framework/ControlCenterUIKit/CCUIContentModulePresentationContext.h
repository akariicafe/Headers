@interface CCUIContentModulePresentationContext : NSObject <NSCopying>

@property (readonly, nonatomic) long long environment;

+ (id)defaultControlCenterPresentationContext;
+ (id)defaultAlertPresentationContext;

- (unsigned long long)hash;
- (id)initWithEnvironment:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
