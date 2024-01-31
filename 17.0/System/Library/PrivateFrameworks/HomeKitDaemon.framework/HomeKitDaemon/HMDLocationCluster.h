@class NSArray, CLLocation, NSString;

@interface HMDLocationCluster : HMFObject <HMFLogging>

@property (readonly, copy) NSArray *locations;
@property (readonly, copy) CLLocation *bestLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithLocations:(id)a0;
- (void)clusterWithGroups:(id)a0;
- (id)generateNewGroupsFromGroups:(id)a0;
- (id)kMeansClusteredGroups;
- (id)locationFromKMeansClusteredGroups:(id)a0;

@end
