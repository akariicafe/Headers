@class NSError, NSArray;

@interface MRAVRoutingDiscoverySessionOperationReport : NSObject

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSArray *discoveredOutputDeviceUIDs;
@property (retain, nonatomic) NSArray *undiscoveredOutputDeviceUIDs;

- (id)description;
- (void).cxx_destruct;

@end
