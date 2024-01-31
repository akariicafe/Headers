@interface SKPrivacyController : NSObject

+ (long long)authorizationStatus;
+ (id)_sharedCloudServiceStatusMonitor;
+ (void)requestAuthorization:(id /* block */)a0;
+ (long long)_authorizationStatusFromUnderlyingAuthorizationStatus:(long long)a0;

@end
