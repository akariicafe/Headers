@class XRNetworkingServiceObservationTuple;

@interface DTNStatSourceMapEntry : NSObject

@property (readonly, nonatomic) long long serialNumber;
@property (nonatomic) int pid;
@property (retain, nonatomic) XRNetworkingServiceObservationTuple *lastStats;

- (void).cxx_destruct;

@end
