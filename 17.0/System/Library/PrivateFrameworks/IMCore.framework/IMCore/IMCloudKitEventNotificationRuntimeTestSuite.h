@class NSString, IMCloudKitHookTestSingleton;

@interface IMCloudKitEventNotificationRuntimeTestSuite : IMRuntimeTestSuite <IMCloudKitEventHandler>

@property BOOL shouldTearDown;
@property (retain, nonatomic) IMCloudKitHookTestSingleton *cloudKitHooks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)runTestsIfNeeded;

- (void)setUp;
- (id)init;
- (void)tearDown;
- (void).cxx_destruct;
- (void)cloudKitEventNotificationManager:(id)a0 syncProgressDidUpdate:(id)a1;

@end
