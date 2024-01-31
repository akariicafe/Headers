@class NSSet, NSDate;

@interface PGGraphAddressEdgeCollection : PGGraphEdgeCollection

@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) unsigned long long numberOfAssets;
@property (readonly, nonatomic) NSSet *universalDateIntervals;

+ (Class)edgeClass;

@end
