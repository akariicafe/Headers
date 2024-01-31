@class NSString, NSNumber;

@interface IRMiLoProviderNearbyDevice : NSObject

@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSNumber *bleRssi;
@property (retain, nonatomic) NSNumber *uwbRange;

- (void).cxx_destruct;
- (id)initWithMiLoPredictionDeviceDistanceIndication:(id)a0;

@end
