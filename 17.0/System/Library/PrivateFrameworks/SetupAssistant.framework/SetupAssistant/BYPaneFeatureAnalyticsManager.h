@class NSString, NSArray, BYAnalyticsManager;
@protocol BYExpressSetupDataSource, BYFlowItemDispositionProvider, BYRunState;

@interface BYPaneFeatureAnalyticsManager : NSObject

@property (retain, nonatomic) BYAnalyticsManager *analyticsManager;
@property (retain, nonatomic) id<BYRunState> runState;
@property (copy, nonatomic) NSString *host;
@property (retain, nonatomic) id<BYFlowItemDispositionProvider> flowItemDispositionProvider;
@property (retain, nonatomic) id<BYExpressSetupDataSource> expressDataSource;
@property (retain, nonatomic) NSArray *expressSetupFeatures;

+ (id)_featureForPane:(long long)a0;
+ (id)_nameForFeature:(long long)a0;

- (void).cxx_destruct;
- (BOOL)_isFeatureForPaneIncludedInExpress:(long long)a0;
- (id)_isValueDifferentFromExpressForFeature:(long long)a0 value:(id)a1;
- (void)clearActionForFeature:(long long)a0;
- (id)initWithAnalyticsManager:(id)a0 runState:(id)a1 host:(id)a2 flowItemDispositionProvider:(id)a3;
- (void)recordActionWithValue:(id)a0 forFeature:(long long)a1;
- (void)recordActionWithValue:(id)a0 previousValue:(id)a1 forFeature:(long long)a2;
- (void)setExpressDataSource:(id)a0 features:(id)a1;

@end
