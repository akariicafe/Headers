@class CTBundle, NSString, NSDictionary, CTXPCServiceSubscriptionContext, NSHashTable, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface PCCarrierBundleHelper : NSObject <CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate> {
    CoreTelephonyClient *_ctClient;
    NSObject<OS_dispatch_queue> *_queue;
    CTXPCServiceSubscriptionContext *_currentDataContext;
    NSHashTable *_delegates;
    CTBundle *_bundle;
}

@property (copy, nonatomic) NSDictionary *cachedPushSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)helper;

- (void)currentDataSimChanged:(id)a0;
- (void)_updateCurrentDataSimContext:(id)a0;
- (BOOL)boolValueFromPushBundleForKey:(id)a0 error:(id *)a1;
- (id)init;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (id)copyValueForKey:(id)a0 error:(id *)a1;
- (void)operatorBundleChange:(id)a0;
- (id)copyValueFromPushBundleForKey:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)_processCarrierBundleChange:(id)a0;

@end
