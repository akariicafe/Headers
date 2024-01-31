@interface IMSMSFilterCapabilitiesSyncHelper : NSObject

+ (void)storeSMSFilterSyncDeviceParams:(id)a0;
+ (unsigned long long)IMSMSFilterCapabilitiesOptionForFilterSubAction:(long long)a0 action:(long long)a1;
+ (id)fetchFilterExtensionNameForDeviceID:(id)a0;
+ (unsigned long long)fetchSMSFilterCapabilitiesOptions;
+ (unsigned long long)fetchSMSFilterCapabilitiesOptionsForDeviceID:(id)a0;
+ (id)fetchSMSFilterSyncDeviceParams;
+ (BOOL)isSMSFilteringEnabledInSMSFilterCapabilitiesOptions;
+ (BOOL)isSubActionActiveInSMSFilterCapabilitiesOptions:(unsigned long long)a0 subAction:(long long)a1 action:(long long)a2;
+ (BOOL)isValidSMSFilterCapabilitiesOptions:(unsigned long long)a0;
+ (BOOL)isValidSubActionForDeviceID:(id)a0 action:(long long)a1 subAction:(long long)a2;
+ (BOOL)shouldUpdateSMSFilterSyncDeviceParamsForDeviceID:(id)a0 smsFilterCapabilitiesOptions:(unsigned long long)a1 filterExtensionName:(id)a2;
+ (void)storeSMSFilterCapabilitiesOptions:(unsigned long long)a0;
+ (void)updateFilterExtensionName;
+ (void)updateSMSFilterCapabilitiesOptions;
+ (void)updateSMSFilterCapabilitiesOptionsCache;
+ (void)updateSMSFilterCapabilitiesOptionsForDeviceID:(id)a0 smsFilterCapabilitiesOptions:(unsigned long long)a1 filterExtensionName:(id)a2;
+ (void)updateSMSFilterCapabilitiesOptionsForSelf;
+ (void)updateSMSFilterSyncDeviceParamsCache;
+ (void)verifyCurrentRelayDevicesActive:(id)a0;

@end
