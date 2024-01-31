@class NSString;

@interface BSUIVibrancyValues : NSObject <NSCopying>

@property (readonly, nonatomic) long long resolvedEffectType;
@property (readonly, nonatomic) NSString *resolvedGroupName;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)calculateValuesForConfiguration:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
