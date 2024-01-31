@class NSUUID;

@interface _HKRaceRouteLocationSeriesQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSUUID *clusterUUID;
@property (nonatomic) unsigned long long workoutSelection;
@property (copy, nonatomic) NSUUID *workoutUUID;
@property (nonatomic) double timestampAnchor;
@property (nonatomic) unsigned long long limit;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
