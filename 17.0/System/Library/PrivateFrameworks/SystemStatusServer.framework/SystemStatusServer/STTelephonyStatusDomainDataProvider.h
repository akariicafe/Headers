@class NSString, STTelephonyStatusDomainPublisher, STTelephonyStateProvider;

@interface STTelephonyStatusDomainDataProvider : NSObject <STTelephonyStateObserver, BSInvalidatable> {
    STTelephonyStateProvider *_telephonyStateProvider;
    STTelephonyStatusDomainPublisher *_telephonyDomainPublisher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithServerHandle:(id)a0 stateProvider:(id)a1;
- (id)initWithStateProvider:(id)a0;
- (void)mobileEquipmentInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void)invalidate;
- (void)stewieStateDidChangeForStateProvider:(id)a0 usingStewieForSOS:(BOOL)a1 isInactiveSOSEnabled:(BOOL)a2;
- (id)initWithServerHandle:(id)a0;
- (void)subscriptionInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void)carrierBundleInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void).cxx_destruct;

@end
