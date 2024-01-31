@class NSString, NSArray;

@interface HMDMediaSystemModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSArray *mediaSystemComponents;

+ (id)properties;
+ (id)schemaHashRoot;

- (id)dependentUUIDs;

@end
