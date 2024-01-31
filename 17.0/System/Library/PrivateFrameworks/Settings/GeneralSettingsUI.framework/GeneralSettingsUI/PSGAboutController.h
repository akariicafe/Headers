@class NSString;

@interface PSGAboutController : PSListController <PSListControllerURLHandler> {
    BOOL _firstViewDidAppear;
}

@property (retain, nonatomic) id effectiveSettingsChangedNotificationObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willResignActive;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void)willBecomeActive;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)willUnlock;
- (void)handleResourceDictionaryWhenAlreadyPresented:(id)a0;
- (id)deviceName:(id)a0;
- (void)setDeviceName:(id)a0 specifier:(id)a1;
- (id)contextMenuConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)remoteBarCodeLaunchHelper:(id)a0;
- (void)updateDeviceNameSpecifierIfNeeded;

@end
