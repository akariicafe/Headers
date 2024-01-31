@class ACAccount, ICQStoragePlanRecommendation;

@interface ICQUIEligibleTipPicker : NSObject {
    ACAccount *_account;
    ICQStoragePlanRecommendation *_planRecommendation;
}

- (void).cxx_destruct;
- (BOOL)_deviceStoragePassesCriteria:(id)a0 freeCloudStorage:(id)a1;
- (BOOL)_eligibleForSyncWithiCloudTipExcludingApps:(id)a0;
- (void)getFirstEligibleTipFromTips:(id)a0 completion:(id /* block */)a1;
- (id)initWithAccount:(id)a0 planRecommendation:(id)a1;

@end
