@class NSArray, PSSimStatusCache, NSMutableDictionary, NSString, CoreTelephonyClient;

@interface PSUICoreTelephonyCarrierBundleCache : NSObject <CoreTelephonyClientCarrierBundleDelegate>

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain, nonatomic) PSSimStatusCache *simCache;
@property (retain, nonatomic) NSArray *keys;
@property (retain, nonatomic) NSArray *defaultValues;
@property (retain, nonatomic) NSMutableDictionary *dictionariesBySlot;
@property (retain, nonatomic) NSMutableDictionary *carrierBundleVersionDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initPrivate;
- (id)init;
- (void)willEnterForeground;
- (id)getLogger;
- (void).cxx_destruct;
- (void)carrierBundleChange:(id)a0;
- (void)_clearCache;
- (void)bulkFetchForKeys:(id)a0 defaultValues:(id)a1;
- (id)activeDataCarrierName;
- (void)bulkFetch;
- (void)bulkFetchCarrierServicesNamesForServices:(id)a0 context:(id)a1;
- (id)carrierBundleVersion:(id)a0;
- (id)carrierName:(id)a0;
- (id)carrierServiceNameForServiceName:(id)a0 context:(id)a1;
- (id)carrierServices:(id)a0;
- (id)carrierServicesAccountUrl:(id)a0;
- (id)carrierServicesMyAccountUrlTitle:(id)a0;
- (id)carrierServicesWebViewAccountUrl:(id)a0;
- (void)createKeysAndDefaultValues;
- (id)fetchCarrierBundleValue:(id)a0 context:(id)a1;
- (void)fetchCarrierBundleVersion;
- (id)getCarrierBundleArrayForKey:(id)a0 context:(id)a1;
- (id)getCarrierBundleDictForKey:(id)a0 context:(id)a1;
- (BOOL)getCarrierBundleFlagForKey:(id)a0 context:(id)a1;
- (id)getCarrierBundleStringForKey:(id)a0 context:(id)a1;
- (id)getCarrierBundleValueForKey:(id)a0 context:(id)a1;
- (id)getDictionaryForSlotID:(long long)a0;
- (id)initWithCoreTelephonyClient:(id)a0 simStatusCache:(id)a1;
- (BOOL)is5GSAEnabledByDefault:(id)a0;
- (BOOL)isMMSOnWhileRoamingForActiveDataPlan;
- (id)mmsInfoTitle:(id)a0;
- (id)mmsInfoUrl:(id)a0;
- (void)resetDictionariesBySlot;
- (BOOL)shouldOverride3Gto4G:(id)a0;
- (BOOL)shouldOverrideLTEto4G:(id)a0;
- (BOOL)shouldShowVoiceRoamingSwitchForDefaultVoicePlan;
- (BOOL)shouldShowWifiAssistForActiveDataPlan;
- (BOOL)show5GSACoverageExtension:(id)a0;
- (BOOL)show5GWarningUnsupportedCarrier:(id)a0;
- (BOOL)showServiceCodes:(id)a0;
- (BOOL)showVoNRWarningUnsupportedCarrier:(id)a0;
- (BOOL)showVolteWarningUnsupportedCarrier:(id)a0;
- (id)volteCustomerCarePhoneNumber:(id)a0;
- (id)volteCustomerCareWebsite:(id)a0;

@end
