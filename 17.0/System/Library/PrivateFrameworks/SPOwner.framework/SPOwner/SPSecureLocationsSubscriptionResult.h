@class NSArray;

@interface SPSecureLocationsSubscriptionResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) double expiresIn;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExpiryTime:(double)a0 locations:(id)a1;

@end
