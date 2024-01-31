@class NSString, BSServiceConnection;

@interface SBSWidgetMetricsServer : NSObject <SBSWidgetHostingEnvironmentMetricsProviding> {
    BSServiceConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)checkOutServerInstance;
+ (void)returnServerInstance:(id)a0;

- (id)previewMetricsSpecificationForBundleIdentifier:(id)a0;
- (id)init;
- (void)dealloc;
- (id)_init;
- (void)_createConnection;
- (id)previewMetricsSpecificationForDeviceContext:(id)a0 displayContext:(id)a1 bundleIdentifier:(id)a2;
- (id)systemMetricsForWidget:(id)a0;
- (void).cxx_destruct;
- (id)previewMetricsSpecificationsForBundleIdentifier:(id)a0;
- (id)previewMetricsSpecificationsForDeviceContext:(id)a0 displayContext:(id)a1 bundleIdentifier:(id)a2;
- (id)systemMetricsForWidget:(id)a0 inHostingEnvironment:(id)a1;

@end
