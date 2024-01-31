@class NSString, NSMutableDictionary, PSSimStatusCache, CoreTelephonyClient;

@interface PSUI5GStandaloneCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {
    CoreTelephonyClient *_client;
    PSSimStatusCache *_simStatusCache;
    BOOL _cacheNeedsRefresh;
}

@property (retain) NSMutableDictionary *SAEnabledDict;
@property (retain) NSMutableDictionary *NRStatusDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initPrivate;
- (void)currentDataSimChanged:(id)a0;
- (id)init;
- (void)clearCache;
- (void)dealloc;
- (void)willEnterForeground;
- (id)getLogger;
- (void).cxx_destruct;
- (void)carrierBundleChange:(id)a0;
- (void)nrDisableStatusChanged:(id)a0 status:(id)a1;
- (BOOL)are5GRATModesUserInteractableForContext:(id)a0;
- (void)clearCacheAndRefresh;
- (void)fetch5GSupportAndEnabledStatusIfNeeded;
- (void)fetchNRStatus;
- (unsigned long long)getNSADisableStatusReasonMaskForContext:(id)a0;
- (unsigned long long)getSADisableStatusReasonMaskForContext:(id)a0;
- (id)initWithCoreTelephonyClient:(id)a0 simStatusCache:(id)a1;
- (BOOL)is5GSAEnabledForContext:(id)a0;
- (BOOL)is5GSASupportedForContext:(id)a0;
- (BOOL)is5GSASwitchUserInteractableForContext:(id)a0;
- (void)notifyClientsNeedRefresh;
- (id)set5GSAEnabled:(BOOL)a0 forContext:(id)a1;

@end
