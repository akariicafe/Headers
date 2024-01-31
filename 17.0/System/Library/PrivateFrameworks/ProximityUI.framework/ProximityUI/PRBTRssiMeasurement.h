@class NSUUID;

@interface PRBTRssiMeasurement : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) int rssi;
@property (readonly, nonatomic) unsigned long long channel;
@property (readonly, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithTime:(double)a0 rssi:(int)a1 channel:(unsigned long long)a2 uuid:(id)a3;

@end
