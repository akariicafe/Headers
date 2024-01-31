@interface iCloudQuotaUI.RecommendationAnalyticsHelper : NSObject {
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ totalStorageInGB;
    void /* unknown type, empty encoding */ userType;
    void /* unknown type, empty encoding */ storageDataController;
    void /* unknown type, empty encoding */ recommendationFilter;
}

- (id)init;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (void)sendManageStorageDisplayedEvent;
- (void)sendRecommendedForYouTapEvent;
- (void)sendiCloudSettingsDisplayedEvent;

@end
