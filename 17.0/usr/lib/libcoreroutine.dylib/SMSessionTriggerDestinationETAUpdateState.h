@interface SMSessionTriggerDestinationETAUpdateState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double distanceRemaining;
@property (nonatomic) double distanceDifference;
@property (nonatomic) double nominalTravelTimeRemaining;
@property (nonatomic) double nominalTravelTimeDifference;
@property (nonatomic) BOOL nominalTravelTimeShorter;
@property (nonatomic) BOOL remainingDistanceShorter;
@property (nonatomic) BOOL shouldUpdateETAUpperBound;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDistanceRemaining:(double)a0 distanceDifference:(double)a1 nominalTravelTimeRemaining:(double)a2 nominalTravelTimeDifference:(double)a3 nominalTravelTimeShorter:(BOOL)a4 remainingDistanceShorter:(BOOL)a5 shouldUpdateETAUpperBound:(BOOL)a6;

@end
