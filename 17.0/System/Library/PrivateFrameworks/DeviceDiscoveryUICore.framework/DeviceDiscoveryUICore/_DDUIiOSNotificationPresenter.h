@class UNUserNotificationCenter, FBSOpenApplicationService, SFWirelessSettingsController, NSString, _DDUIiOSPresentedNotification, NSObject;
@protocol _DDUIiOSNotificationPresenterApplicationRecordVendor, OS_dispatch_source, _DDUINotificationPresenterDelegate;

@interface _DDUIiOSNotificationPresenter : NSObject <UNUserNotificationCenterDelegate, _DDUINotificationPresenter>

@property (nonatomic) BOOL setup;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) id<_DDUIiOSNotificationPresenterApplicationRecordVendor> applicationRecordVendor;
@property (retain, nonatomic) FBSOpenApplicationService *openApplicationService;
@property (retain, nonatomic) SFWirelessSettingsController *wirelessSettingsController;
@property (retain, nonatomic) _DDUIiOSPresentedNotification *presentedNotification;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *clearNotificationTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_DDUINotificationPresenterDelegate> delegate;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)_setupIfNeeded;
- (BOOL)_applicationSupportsServiceIdentifier:(id)a0 serviceIdentifier:(id)a1;
- (void)_clearNotificationTimeout;
- (void)_clearPresentedNotificationIfNeeded;
- (void)_configureNotificationTimeout;
- (id)_createAppStoreNotification:(id)a0;
- (id)_createConnectNotificationWithDeviceName:(id)a0 appName:(id)a1;
- (id)_createContinuityCameraNotificationWithDeviceName:(id)a0;
- (void)_handleContinuityCameraDisabledAlertResponseWithState:(long long)a0;
- (void)_showContinuityCameraDisabledAlertWithState:(long long)a0;
- (void)dismissNotificationWithIdentifier:(id)a0;
- (id)initWithNotificationCenter:(id)a0 applicationRecordVendor:(id)a1 openApplicationService:(id)a2;
- (void)showContinuityCameraConfirmation:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)showNotificationForApplication:(id)a0 deviceName:(id)a1 identifier:(id)a2 completion:(id /* block */)a3;

@end
