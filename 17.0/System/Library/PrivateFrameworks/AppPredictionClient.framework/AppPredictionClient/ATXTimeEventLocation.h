@class NSString, CLLocation;

@interface ATXTimeEventLocation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CLLocation *geoLocation;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long destinationLOIType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLocation:(id)a0 title:(id)a1 type:(long long)a2;
- (BOOL)isApproximatelyEqualTo:(id)a0;

@end
