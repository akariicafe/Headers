@class NSData, PRRangeMeasurement, PRAngleMeasurement;

@interface PRDeviceScore : NSObject

@property (nonatomic) double timestamp;
@property (readonly) NSData *btAddress;
@property (readonly) long long proximity;
@property (readonly) PRRangeMeasurement *range;
@property (readonly) PRAngleMeasurement *angle;
@property (readonly) double score;
@property (readonly) double scoreUncertainty;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithValues:(id)a0 proximity:(long long)a1 range:(id)a2 angle:(id)a3 score:(double)a4 scoreUncertainty:(double)a5;
- (BOOL)isEqualToPRDeviceScore:(id)a0;

@end
