@class NSString, NSArray;

@interface HMDZoneModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *roomUUIDs;

+ (id)properties;

- (id)dependentUUIDs;

@end
