@class NSString;

@interface HMDCloudZoneInformationModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *ownerName;
@property (nonatomic) BOOL requiresHomeManagerUpdate;

+ (id)properties;

- (id)dependentUUIDs;

@end
