@class NSString, NSDictionary;

@interface HMDHomeManagerModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *controllerKeyIdentifier;
@property (retain, nonatomic) NSString *primaryHomeUUID;
@property (retain, nonatomic) NSDictionary *cloudZoneInformation;

+ (id)properties;

@end
