@class CLLocation, NSMutableArray;

@interface HMDLocationClusterGroup : HMFObject

@property (readonly, copy) CLLocation *center;
@property (readonly) NSMutableArray *locations;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithCenter:(id)a0;

@end
