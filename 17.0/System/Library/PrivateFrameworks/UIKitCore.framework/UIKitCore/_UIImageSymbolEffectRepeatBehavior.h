@interface _UIImageSymbolEffectRepeatBehavior : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _hasCustomRepeatBehavior;
@property (readonly, nonatomic) double _numberOfRepeats;

+ (id)_repeatBehaviorWithRepeats:(double)a0;
+ (id)defaultRepeatBehavior;
+ (id)fixedRepeatBehavior:(unsigned long long)a0;
+ (id)indefiniteRepeatBehavior;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
