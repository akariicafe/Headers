@class CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface MX_TelephonyClient : NSObject {
    CoreTelephonyClient *mClient;
    NSObject<OS_dispatch_queue> *mAccessQueue;
}

- (id)init;
- (void)dealloc;
- (id)copyCountryNameFromOperatorCountryBundle;
- (id)copyIsoCountryCodeForMCC;
- (BOOL)getIsInHomeCountry;

@end
