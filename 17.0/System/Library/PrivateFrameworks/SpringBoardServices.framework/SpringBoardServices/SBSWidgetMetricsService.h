@protocol SBSWidgetHostingEnvironmentMetricsProviding;

@interface SBSWidgetMetricsService : NSObject

@property (readonly, weak, nonatomic) id<SBSWidgetHostingEnvironmentMetricsProviding> metricsProvider;

- (id)previewMetricsSpecificationForBundleIdentifier:(id)a0;
- (id)init;
- (void)dealloc;
- (id)previewMetricsSpecificationForDeviceContext:(id)a0 displayContext:(id)a1 bundleIdentifier:(id)a2;
- (id)systemMetricsForWidget:(id)a0;
- (void).cxx_destruct;
- (id)initWithMetricsProvider:(id)a0;
- (id)previewMetricsSpecificationsForBundleIdentifier:(id)a0;
- (id)previewMetricsSpecificationsForDeviceContext:(id)a0 displayContext:(id)a1 bundleIdentifier:(id)a2;
- (id)systemMetricsForWidget:(id)a0 inHostingEnvironment:(id)a1;

@end
