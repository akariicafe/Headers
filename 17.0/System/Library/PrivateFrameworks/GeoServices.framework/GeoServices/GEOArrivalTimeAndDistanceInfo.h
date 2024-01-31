@class NSArray;

@interface GEOArrivalTimeAndDistanceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *arrivalTimeInfo;
@property (nonatomic) double distanceRemainingToEndOfLeg;
@property (nonatomic) double distanceRemainingToEndOfRoute;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
