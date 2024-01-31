@class NSString;

@interface DTSpringBoardProcessControlService : DTProcessControlService <DTSpringBoardProcessControlServiceAuthorizedMethods>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (BOOL)_HIDEvent:(unsigned int)a0 hold:(BOOL)a1;
- (BOOL)_dismissTodayView;
- (id)_launchSuspendedProcessWithBundleIdentifier:(id)a0 orDevicePath:(id)a1 environment:(id)a2 arguments:(id)a3 options:(id)a4 error:(id *)a5;
- (BOOL)_triggerSiri;
- (id)launchSuspendedProcessWithDevicePath:(id)a0 bundleIdentifier:(id)a1 environment:(id)a2 arguments:(id)a3 options:(id)a4;
- (id)processIdentifierForBundleIdentifier:(id)a0;
- (void)sendProcessControlEvent:(id)a0 toPid:(id)a1;
- (BOOL)sendProcessControlEvent:(id)a0 toPid:(id)a1 error:(id *)a2;
- (BOOL)showNotificiationCenterWidget:(id)a0 withError:(id *)a1;
- (BOOL)showSBWidget:(id)a0 withError:(id *)a1;
- (BOOL)simulateNotificationForBundleID:(id)a0 payload:(id)a1 withError:(id *)a2;

@end
