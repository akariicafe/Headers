@class NSDictionary, FPDServer, FPAppRegistry, NSObject;
@protocol OS_dispatch_queue;

@interface FPDAppMonitor : NSObject {
    NSDictionary *_defaultProviderByAppBundleID;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _didChangeProvidersToken;
    int _didChangeDefaultProviderToken;
}

@property (readonly, weak, nonatomic) FPDServer *server;
@property (getter=isMonitoring) BOOL monitoring;
@property (readonly, copy, nonatomic) FPAppRegistry *appRegistry;

- (id)initWithServer:(id)a0;
- (void)stopMonitoring;
- (void)_didUnregisterApps:(id)a0;
- (void)_didChangeListOfProviders;
- (void)dumpStateTo:(id)a0;
- (void)_populateListOfMonitoredApps;
- (void)_didRegisterApps:(id)a0;
- (void)_updateDefaultProviderByAppBundleID;
- (id)_updateDefaultProviderDomainID;
- (void)_didChangeDefaultSaveLocationInUserDefaults;
- (void).cxx_destruct;
- (id)_appMetadataIfMonitoringIsNeeded:(id)a0;
- (int)_registerForNotification:(id)a0 handler:(id /* block */)a1;
- (void)startMonitoring;
- (void)_didChangeLocale:(id)a0;
- (id)listOfPlaceholderApps;

@end
