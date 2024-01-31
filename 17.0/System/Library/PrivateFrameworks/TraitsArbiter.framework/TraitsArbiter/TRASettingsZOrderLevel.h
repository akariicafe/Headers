@interface TRASettingsZOrderLevel : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) double zOrderLevel;

- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithZOrderLevel:(double)a0;
- (id)initWithZOrderLevelSettings:(id)a0;
- (BOOL)isEqualToZOrderLevelSettings:(id)a0;

@end
