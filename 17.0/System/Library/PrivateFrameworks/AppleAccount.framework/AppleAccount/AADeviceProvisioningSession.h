@class NSString;

@interface AADeviceProvisioningSession : NSObject {
    NSString *_dsid;
    unsigned long long _dsidNumber;
    struct OpaqueCFHTTPCookieStorage { } *_cookieStorageRef;
}

- (id)deviceProvisioningInfo;
- (id)init;
- (id)initWithAccount:(id)a0;
- (int)eraseProvisioning;
- (id)initWithDSID:(id)a0;
- (int)provisionDeviceWithData:(id)a0;
- (void)addProvisioningInfoToURLRequest:(id)a0 sendEmptyValues:(BOOL)a1;
- (void).cxx_destruct;
- (void)addProvisioningInfoToAARequest:(id)a0;
- (int)synchronizeProvisioningWithData:(id)a0;
- (void)setCookieStorageRef:(struct OpaqueCFHTTPCookieStorage { } *)a0;
- (void)addProvisioningInfoToAARequest:(id)a0 withFallback:(BOOL)a1;

@end
