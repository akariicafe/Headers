@class NSDictionary;

@interface HMDCloudGroupRootRecordModelObject : HMDBackingStoreModelObject

@property (retain, nonatomic) NSDictionary *objectIDToRecordNameMap;

+ (id)properties;

@end
