@class NSString, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue, VCTelephonyInterfaceDelegate;

@interface VCTelephonyInterface : NSObject <CoreTelephonyClientDataDelegate> {
    id _delegate;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    struct __CTServerConnection { } *_connection;
    CoreTelephonyClient *_coreTelephonyClient;
    long long _subscriptionSlot;
    long long _ctSubscriptionSlot;
    CTXPCServiceSubscriptionContext *_ctSubscriptionContext;
}

@property id<VCTelephonyInterfaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)ctDirectionForTelephonyLinkDirection:(long long)a0;
+ (long long)ctSubscriptionSlotForSubscriptionSlot:(long long)a0;
+ (long long)telephonyLinkDirectionForCtDirection:(int)a0;

- (id)init;
- (void)dealloc;
- (void)unregisterForNotifications;
- (BOOL)registerForNotifications;
- (void)anbrActivationState:(id)a0 enabled:(BOOL)a1;
- (void)anbrBitrateRecommendation:(id)a0 bitrate:(id)a1 direction:(int)a2;
- (void)notifyCodecModeChangeEventToCT:(struct _VCAudioCodecModeChangeEvent { int x0; int x1; int x2; unsigned int x3; struct EVSRFParams { unsigned int x0; unsigned int x1; } x4; })a0;
- (void)getAnbrActivationStateWithCompletionHandler:(id /* block */)a0;
- (BOOL)getCarrierBundleValue:(id *)a0 forKey:(id)a1;
- (unsigned int)getSampleRateFromAudioCodecInfo:(id)a0;
- (void)handleTelephonyNotification:(id)a0 withInfo:(id)a1;
- (void)handleVocoderNotificationWithInfo:(id)a0;
- (id)initWithTelephonySubscriptionSlot:(long long)a0;
- (void)queryAnbrBitrateRecommendation:(unsigned int)a0 direction:(long long)a1 completionHandler:(id /* block */)a2;
- (void)setupVCMediaStreamRateAdaptationConfig:(struct tagVCMediaStreamRateAdaptationConfig { long long x0; union tagVCMediaStreamRateAdaptationAlgorithmConfig { struct tagVCMediaStreamRateAdaptationConfigTelephonyUplink { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct tagVCMediaStreamRateAdaptationConfigScreenShare { unsigned int x0; unsigned int x1; unsigned int x2; int x3; } x1; } x1; } *)a0;
- (id)translateVocoderTypeToCoreAudioType:(id)a0;
- (unsigned int)validateCarrierBundleConfigParameters:(id)a0 forKey:(id)a1 defaultValue:(unsigned int)a2 minValue:(unsigned int)a3 maxValue:(unsigned int)a4;

@end
