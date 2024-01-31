@class TPSCloudDeviceInfo;
@protocol TPSCloudDeviceDataSource;

@interface TPSCloudDeviceValidation : TPSTargetingValidation

@property (retain, nonatomic) TPSCloudDeviceInfo *deviceInfo;
@property (weak, nonatomic) id<TPSCloudDeviceDataSource> dataSource;

+ (id)deviceInfoForIdentifier:(id)a0;
+ (id)normalizedVersion:(id)a0;
+ (id)tvDeviceInfo;

- (id)description;
- (void).cxx_destruct;
- (void)validateWithCompletion:(id /* block */)a0;
- (id)initWithDeviceInfo:(id)a0;

@end
