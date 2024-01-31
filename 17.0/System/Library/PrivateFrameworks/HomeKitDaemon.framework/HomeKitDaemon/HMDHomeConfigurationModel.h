@class NSNumber;

@interface HMDHomeConfigurationModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSNumber *configurationVersion;
@property (nonatomic) BOOL homeHasLocalChanges;

+ (id)properties;

@end
