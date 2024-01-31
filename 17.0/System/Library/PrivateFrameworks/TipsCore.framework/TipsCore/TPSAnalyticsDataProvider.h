@protocol TPSAnalyticsDataProviderDataSource;

@interface TPSAnalyticsDataProvider : NSObject

@property (weak, nonatomic) id<TPSAnalyticsDataProviderDataSource> dataSource;

- (id)experimentCampID;
- (id)deliveryInfoVersion;
- (unsigned long long)hintDisplayedCountForIdentifier:(id)a0;
- (id)initWithDataSource:(id)a0;
- (id)correlationIDForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)experimentID;
- (id)contextForIdentifier:(id)a0;
- (id)displayTypeForIdentifier:(id)a0;
- (id)bundleIDForIdentifier:(id)a0;

@end
