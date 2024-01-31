@class HMDAccountIdentifier;

@interface HMDAccountModel : HMDBackingStoreModelObject

@property (copy, nonatomic) HMDAccountIdentifier *identifier;

+ (id)properties;
+ (id)schemaHashRoot;

@end
