@class NSString, IDSCTPNRInfo;
@protocol IDSCTPNRDelegate;

@interface IDSCTPNR : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientPNRDelegate>

@property (retain, nonatomic) id coreTelephonyClient;
@property (retain, nonatomic) NSString *labelID;
@property (retain, nonatomic) id context;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } contextLock;
@property (nonatomic) long long carrierShortcodeSupported;
@property (weak, nonatomic) id<IDSCTPNRDelegate> PNRDelegate;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) BOOL isPNRSupported;
@property (readonly, nonatomic) BOOL isSIMReady;
@property (readonly, nonatomic) BOOL userOptInRequired;
@property (readonly, nonatomic) IDSCTPNRInfo *PNRInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscriptionInfoDidChange;
- (void)operatorBundleChange:(id)a0;
- (void)pnrReadyStateNotification:(id)a0 regState:(BOOL)a1;
- (void).cxx_destruct;
- (void)carrierBundleChange:(id)a0;
- (void)pnrResponseReceived:(id)a0 pnrRspData:(id)a1;
- (void)pnrRequestSent:(id)a0 pnrReqData:(id)a1;
- (id)_initWithCoreTelephonyClient:(id)a0 SIM:(id)a1;
- (void)_resetCarrierShortcodeSupportedCachedValue;
- (id)_telephonyRequestForPushToken:(id)a0 phoneNumberValidationMechanism:(id)a1 attemptCount:(unsigned int)a2;
- (BOOL)isRelevantContext:(id)a0;
- (BOOL)issuePNRForMechanism:(id)a0 pushToken:(id)a1 attemptCount:(unsigned int)a2 completion:(id /* block */)a3;

@end
