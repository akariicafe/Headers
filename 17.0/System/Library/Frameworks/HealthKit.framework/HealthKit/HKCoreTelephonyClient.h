@class CTStewieSupport, NSString, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue, HKCoreTelephonyClientDelegate;

@interface HKCoreTelephonyClient : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientProvisioningDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_client;
    NSString *_cachedCountryCode;
    CTStewieSupport *_cachedStewieSupport;
}

@property (weak, nonatomic) id<HKCoreTelephonyClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscriptionInfoDidChange;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void)dealloc;
- (void)plmnChanged:(id)a0 plmn:(id)a1;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;
- (void)onForeground:(id)a0;
- (void)simLessSubscriptionsDidChange;
- (void)stewieSupportChanged;
- (void).cxx_destruct;
- (void)invalidateCachedCountryCode;
- (void)fetchStewieSupportedWithCompletion:(id /* block */)a0;
- (void)activeSubscriptionsDidChange;

@end
