@class NSString, NSData, NSNumber, HMDDevice;

@interface HMDResidentDeviceModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *deviceUUID;
@property (retain, nonatomic) NSNumber *enabled;
@property (retain, nonatomic) NSNumber *confirmed;
@property (retain, nonatomic) HMDDevice *device;
@property (retain, nonatomic) NSData *residentCapabilities;
@property (retain, nonatomic) NSString *changeToken;

+ (id)properties;

@end
