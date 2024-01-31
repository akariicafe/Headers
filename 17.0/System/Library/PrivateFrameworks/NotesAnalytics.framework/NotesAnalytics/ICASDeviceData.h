@class NSString, ICASOsInstallVariant;

@interface ICASDeviceData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) NSString *devicePlatform;
@property (readonly, nonatomic) ICASOsInstallVariant *osInstallVariant;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *osBundleVersion;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithDeviceModel:(id)a0 devicePlatform:(id)a1 osInstallVariant:(id)a2 osVersion:(id)a3 osBundleVersion:(id)a4;

@end
