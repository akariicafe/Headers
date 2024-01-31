@class NSSet;

@interface HMDBackingStoreResidentUpdateResult : NSObject

@property (copy, nonatomic) NSSet *addedResidentDevices;
@property (copy, nonatomic) NSSet *deletedResidentDevices;
@property (copy, nonatomic) NSSet *reachabilityUpdates;

- (void).cxx_destruct;
- (id)initWithAddedResidentDevices:(id)a0 deletedResidentDevices:(id)a1 reachabilityUpdates:(id)a2;

@end
