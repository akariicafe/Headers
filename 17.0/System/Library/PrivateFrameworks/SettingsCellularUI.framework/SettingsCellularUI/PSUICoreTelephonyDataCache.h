@class NSMutableDictionary, NSString, RadiosPreferences, CoreTelephonyClient;

@interface PSUICoreTelephonyDataCache : NSObject <CoreTelephonyClientDataDelegate, RadiosPreferencesDelegate>

@property (retain, nonatomic) CoreTelephonyClient *client;
@property struct __CTServerConnection { } *ctConnection;
@property (retain) NSMutableDictionary *dataStatusDict;
@property (retain) NSMutableDictionary *intlDataAccessStatus;
@property (retain, nonatomic) RadiosPreferences *radioPreferences;
@property BOOL cellularDataSetting;
@property BOOL cellularDataSettingInitialized;
@property struct { BOOL fFeatureEnabled; BOOL fUserEnabled; } privacyProxySetting;
@property BOOL privacyProxySettingsFetched;
@property (retain) NSMutableDictionary *isPrivateNetworkSIM;
@property BOOL cellularStatisticsSetting;
@property BOOL cellularStatisticsSettingFetched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)airplaneModeChanged;
- (id)initPrivate;
- (BOOL)isAirplaneModeEnabled;
- (BOOL)isCellularDataEnabled;
- (id)init;
- (void)dealloc;
- (void)dataSettingsChanged:(id)a0;
- (void)willEnterForeground;
- (id)getLogger;
- (void)fetchCellularDataEnabled;
- (void).cxx_destruct;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (void)setCellularDataEnabled:(BOOL)a0;
- (void)dataRoamingSettingsChanged:(id)a0 status:(BOOL)a1;
- (BOOL)getInternationalDataAccessStatus:(id)a0;
- (void)setInternationalDataAccessStatus:(BOOL)a0;
- (void)fetchDataStatus;
- (BOOL)isUserSubscribedToPrivacyProxy:(id)a0;
- (id)copyStartDateOfCellularDataUsageRecords;
- (void)eraseCellularDataUsageRecords;
- (void)fetchCellularUsageStatisticsSetting;
- (void)fetchInternationalDataAccessStatus:(id)a0;
- (void)fetchIsPrivateNetworkSIM:(id)a0;
- (void)fetchPrivacyProxyStatus:(id)a0;
- (id)getDataStatus:(id)a0;
- (BOOL)getInternationalDataAccessStatus;
- (BOOL)isCellularUsageStatisticsEnabled;
- (BOOL)isDataFallbackEnabled;
- (BOOL)isPrivacyProxyEnabled:(id)a0;
- (BOOL)isPrivateNetworkSIM:(id)a0;
- (void)setCellularUsageStatisticsEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)setDataFallbackEnabled:(BOOL)a0;
- (void)setInternationalDataAccessStatus:(id)a0 status:(BOOL)a1;
- (void)setPrivacyProxy:(id)a0 enabled:(BOOL)a1;

@end
