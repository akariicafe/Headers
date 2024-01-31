@interface RMFeatureFlags : NSObject

@property (class, readonly, nonatomic, getter=isAuthenticationServicesSubscriberEnabled) BOOL AuthenticationServicesSubscriberEnabled;
@property (class, readonly, nonatomic, getter=isBatteryHealthStatusEnabled) BOOL BatteryHealthStatusEnabled;
@property (class, readonly, nonatomic, getter=isDiskManagementSubscriberEnabled) BOOL DiskManagementSubscriberEnabled;
@property (class, readonly, nonatomic, getter=isFileConduitEnabled) BOOL FileConduitEnabled;
@property (class, readonly, nonatomic, getter=isHTTPConduitEnabled) BOOL HTTPConduitEnabled;
@property (class, readonly, nonatomic, getter=isManagedAppsEnabled) BOOL ManagedAppsEnabled;
@property (class, readonly, nonatomic, getter=isManagedConfigurationFilesEnabled) BOOL ManagedConfigurationFilesEnabled;
@property (class, readonly, nonatomic, getter=isNetworkWiFiConfigurationEnabled) BOOL NetworkWiFiConfigurationEnabled;
@property (class, readonly, nonatomic, getter=isScreenSharingSubscriberEnabled) BOOL ScreenSharingSubscriberEnabled;
@property (class, readonly, nonatomic, getter=isServicesSubscriberEnabled) BOOL ServicesSubscriberEnabled;
@property (class, readonly, nonatomic, getter=isWatchEnrollmentSubscriberEnabled) BOOL WatchEnrollmentSubscriberEnabled;
@property (class, readonly, nonatomic, getter=isAppleInternal) BOOL appleInternal;
@property (class, readonly, nonatomic, getter=hasBridgeOS) BOOL hasBridgeOS;

@end
