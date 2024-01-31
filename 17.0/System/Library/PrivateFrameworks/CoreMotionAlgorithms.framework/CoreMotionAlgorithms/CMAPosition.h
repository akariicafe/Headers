@class NSNumber;

@interface CMAPosition : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) double distance;
@property (nonatomic) NSNumber *horizontalDistanceNumber;
@property (nonatomic) double horizontalAngle;
@property (nonatomic) NSNumber *horizontalAngleNumber;
@property (nonatomic) double horizontalAngleAccuracy;
@property (nonatomic) NSNumber *horizontalAngleAccuracyNumber;
@property (nonatomic) long long convergenceStatus;
@property (nonatomic) long long revokeReason;
@property (nonatomic) long long verticalState;

@end
