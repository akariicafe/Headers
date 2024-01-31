@interface IMSMSFilterHelper : NSObject

+ (unsigned long long)conversationFilterModeForMessageFilter:(unsigned long long)a0;
+ (id)fetchSMSFilterExtensionParams;
+ (long long)filterActionForCategory:(long long)a0;
+ (long long)filterSubActionForCategory:(long long)a0 subCategory:(long long)a1;
+ (BOOL)isValidActiveFilterAction:(long long)a0 subAction:(long long)a1;
+ (id)smsFilterParamForFilterMode:(unsigned long long)a0;
+ (void)updateSMSFilterExtensionParams;
+ (BOOL)IDSDeviceSupportsIncomingSMSRelayFilteringForDeviceType:(long long)a0;
+ (id)filterLabelForAction:(long long)a0 subAction:(long long)a1;
+ (id)fetchSMSFilterParamForCategory:(long long)a0 subCategory:(long long)a1;
+ (BOOL)supportsIncomingSMSRelayFiltering;

@end
