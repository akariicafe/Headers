@class NSArray;

@interface HMDMutableMediaGroupsAggregateData : HMDMediaGroupsAggregateData

@property (copy) NSArray *destinations;
@property (copy) NSArray *destinationControllersData;
@property (copy) NSArray *groups;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
