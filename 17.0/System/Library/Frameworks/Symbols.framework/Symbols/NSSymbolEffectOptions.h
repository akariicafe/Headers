@interface NSSymbolEffectOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double _speed;
@property (nonatomic) long long _repeatBehavior;
@property (nonatomic) long long _repeatCount;

+ (id)options;
+ (id)optionsWithNonRepeating;
+ (id)optionsWithRepeating;
+ (id)optionsWithRepeatCount:(long long)a0;
+ (id)optionsWithSpeed:(double)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)optionsWithNonRepeating;
- (id)optionsWithRepeating;
- (id)optionsWithRepeatCount:(long long)a0;
- (id)optionsWithSpeed:(double)a0;

@end
