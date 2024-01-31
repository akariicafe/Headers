@interface CNPair : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) id first;
@property (readonly) id second;

+ (id)pairWithFirst:(id)a0 second:(id)a1;

- (unsigned long long)hash;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initNonMemoizedWithFirst:(id)a0 second:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
