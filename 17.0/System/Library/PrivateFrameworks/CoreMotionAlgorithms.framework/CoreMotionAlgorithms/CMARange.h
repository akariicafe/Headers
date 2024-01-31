@interface CMARange : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) double range;
@property (nonatomic) double rangeError;
@property (nonatomic) double rssi;
@property (nonatomic) unsigned short cycleIndex;

@end
