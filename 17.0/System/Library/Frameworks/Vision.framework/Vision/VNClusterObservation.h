@class NSArray, NSSet, NSData, NSDictionary, NSNumber;

@interface VNClusterObservation : VNObservation

@property (retain, nonatomic) NSArray *clusters;
@property (retain, nonatomic) NSArray *suggestionsForCluster;
@property (retain, nonatomic) NSData *clusterState;
@property (retain, nonatomic) NSSet *clusteredFaceIds;
@property (retain, nonatomic) NSArray *groupedClusteredFaceIdsForCluster;
@property (retain, nonatomic) NSNumber *distance;
@property (retain, nonatomic) NSDictionary *distancesById;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)vn_cloneObject;

@end
