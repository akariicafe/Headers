@interface _DASActivityRateLimit : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long maximum;
@property (nonatomic) double window;

+ (id)rateLimitWithMaximum:(unsigned long long)a0 perWindow:(double)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMaximum:(unsigned long long)a0 perWindow:(double)a1;

@end
