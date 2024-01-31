@class NSArray, NSString, PSSpecifier, AIDAAccountManager, _TtC13iCloudQuotaUI29RecommendationAnalyticsHelper, _TtC13iCloudQuotaUI25RecommendationsController;
@protocol AAUISpecifierProviderDelegate;

@interface ICQUIRecommendationsSpecifierProvider : NSObject <iCloudQuotaUI.RecommendationSubtitleControllerDelegate, AAUISpecifierProvider> {
    AIDAAccountManager *_accountManager;
    PSSpecifier *_recommendationsSpecifier;
    _TtC13iCloudQuotaUI29RecommendationAnalyticsHelper *_recommendationAnalyticsHelper;
    _TtC13iCloudQuotaUI25RecommendationsController *_recommendationsController;
    NSString *_recommendedForYouTitle;
    NSString *_recommendedForYouSubtitle;
}

@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)account;
- (BOOL)handleURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0;
- (BOOL)_handleRecommendationsURL:(id)a0;
- (void)_openRecommendationsViewController:(id)a0;
- (void)_reloadSpecifiers;
- (void)recommendationsChangedWithTitle:(id)a0 subtitle:(id)a1;

@end
