@class NSArray;

@interface MRRemoveSyncedEndpointsMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *endpointUIDs;

- (unsigned long long)type;
- (id)initWithEndpointUIDs:(id)a0;

@end
