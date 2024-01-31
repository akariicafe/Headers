@class MKPointOfInterestFilter;

@interface MKHybridMapConfiguration : MKMapConfiguration

@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) BOOL showsTraffic;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithElevationStyle:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToHybridMapConfiguration:(id)a0;

@end
