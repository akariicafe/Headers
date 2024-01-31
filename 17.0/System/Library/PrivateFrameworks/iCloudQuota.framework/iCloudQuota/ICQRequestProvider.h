@class ACAccount;

@interface ICQRequestProvider : NSObject {
    ACAccount *_account;
}

+ (id)_urlReplacementDictionaryForKey:(id)a0 withOfferID:(id)a1 withNotificationID:(id)a2;
+ (BOOL)_keyIsEligibleForURLStringReplacement:(id)a0;
+ (id)_newAccountBagKeyForOldKey:(id)a0;
+ (void)addEntriesToPostDictionary:(id)a0 forStub:(id)a1;
+ (BOOL)attemptSetRequest:(id)a0 toPostWithJSONDict:(id)a1;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (void)addCommonHeadersToRequest:(id)a0;
- (id)_bagURLForKey:(id)a0 withOfferID:(id)a1 withNotificationID:(id)a2;
- (id)_stringTimeOfLastBackup;
- (id)_urlForQuotaKey:(id)a0 offerID:(id)a1 notificationID:(id)a2;
- (void)addBasicAndCloudBackupHeadersToRequest:(id)a0;
- (void)addBasicHeadersToRequest:(id)a0;
- (id)getBackupDeviceUUID;
- (id)httpMethodForKey:(id)a0 offerID:(id)a1 notificationID:(id)a2;
- (id)urlForQuotaKey:(id)a0 offerStub:(id)a1 notificationID:(id)a2;
- (id)urlForUpdateOfferWithContext:(id)a0;
- (BOOL)willUseNewKey:(id)a0 offerID:(id)a1 notificationID:(id)a2;

@end
