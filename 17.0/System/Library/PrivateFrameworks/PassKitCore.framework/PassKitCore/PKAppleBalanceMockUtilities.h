@interface PKAppleBalanceMockUtilities : NSObject

+ (id)_inStoreTokenForType:(long long)a0 debugType:(long long)a1;
+ (id)_appleBalanceAccountDetailsDictionary;
+ (id)_appleBalanceAccountDetailsDictionary2;
+ (id)_appleBalanceAccountNoBalanceDetailsDictionary;
+ (id)_appleBalanceCloudStoreZoneNames;
+ (id)_appleBalanceCloudStoreZoneNames2;
+ (id)_appleBalanceDTUConfigurationDictionary;
+ (id)_appleBalanceDTUConfigurationDictionary2;
+ (id)_appleBalanceSupportedFeaturesArray;
+ (id)_appleBalanceSupportedFeaturesArray2;
+ (id)_date1;
+ (id)_date2;
+ (id)_date3;
+ (id)_date4;
+ (BOOL)_verifyAppleBalanceAccountDetails2:(id)a0;
+ (BOOL)_verifyAppleBalanceAccountDetails:(id)a0;
+ (BOOL)_verifyAppleBalanceSupportedFeatures2:(id)a0;
+ (BOOL)_verifyAppleBalanceSupportedFeatures:(id)a0;
+ (BOOL)_verifyLightweightAppleBalanceAccountDetails:(id)a0;
+ (id)appleBalanceAccountDictionary;
+ (id)appleBalanceAccountDictionary2;
+ (id)appleBalanceAccountDictionaryUpdated;
+ (id)appleBalanceAccountNoBalanceDictionary;
+ (id)appleBalanceAddMoneyConfigurationWithCurrencyCode:(id)a0;
+ (id)appleBalanceInStoreTopUpTokenForType:(long long)a0 state:(long long)a1 debugType:(long long)a2;
+ (id)lightweightAppleBalanceAccountDictionary;
+ (id)mockAppleBalanceAccount;
+ (id)mockInStoreTopUpToken;
+ (id)mockPromotion;
+ (BOOL)verifyAppleBalanceAccount2:(id)a0;
+ (BOOL)verifyAppleBalanceAccount:(id)a0;
+ (BOOL)verifyInStoreTopUpToken:(id)a0;
+ (BOOL)verifyLightweightAppleBalanceAccount:(id)a0;
+ (BOOL)verifyPromotion:(id)a0;

@end
