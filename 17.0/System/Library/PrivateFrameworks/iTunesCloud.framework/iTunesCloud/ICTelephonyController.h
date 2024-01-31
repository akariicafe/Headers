@class NSString, CTXPCServiceSubscriptionContext, NSObject, CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface ICTelephonyController : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_telephonyCallbackQueue;
    NSString *_phoneNumber;
    CoreTelephonyClient *_telephonyClient;
    CTXPCServiceSubscriptionContext *_telephonySubscriptionContext;
}

@property (class, readonly, nonatomic) ICTelephonyController *sharedController;

@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSString *providerName;
@property (readonly, copy, nonatomic) NSString *mobileSubscriberCountryCode;
@property (readonly, copy, nonatomic) NSString *mobileSubscriberNetworkCode;
@property (readonly, copy, nonatomic) NSString *IMEI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)phoneNumberAvailable:(id)a0;
- (id)_init;
- (void)phoneNumberChanged:(id)a0;
- (void).cxx_destruct;
- (BOOL)_ensureTelephonyHandlesAreReady;
- (id)_telephonyClient;
- (id)_telephonySubscriptionContext;
- (void)activeSubscriptionsDidChange;
- (void)_handleActiveSubscriptionsDidChange;
- (void)_updatePhoneNumberAllowingDidChangeNotification:(BOOL)a0;
- (BOOL)sendSMSWithText:(id)a0 toPhoneNumber:(id)a1 error:(id *)a2;

@end
