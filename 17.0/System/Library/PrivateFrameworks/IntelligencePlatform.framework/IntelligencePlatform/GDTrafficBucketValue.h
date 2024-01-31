@interface GDTrafficBucketValue : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long bucket;
@property (readonly, nonatomic) double bucketValue;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBucket:(long long)a0 bucketValue:(double)a1;

@end
