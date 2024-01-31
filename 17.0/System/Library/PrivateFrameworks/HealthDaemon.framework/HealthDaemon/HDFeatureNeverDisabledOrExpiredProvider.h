@protocol HDFeatureDisableAndExpiryProvidingDelegate;

@interface HDFeatureNeverDisabledOrExpiredProvider : NSObject <HDFeatureDisableAndExpiryProviding>

@property (weak, nonatomic) id<HDFeatureDisableAndExpiryProvidingDelegate> delegate;

- (id)rescindedStatusOnActivePairedDeviceForCountryCode:(id)a0 error:(id *)a1;
- (id)rescindedStatusForCountryCode:(id)a0 device:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
