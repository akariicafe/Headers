@interface PKPaymentSetupProductRegionDataCoordinate : NSObject <NSCopying>

@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoordinatePair:(id)a0;

@end
