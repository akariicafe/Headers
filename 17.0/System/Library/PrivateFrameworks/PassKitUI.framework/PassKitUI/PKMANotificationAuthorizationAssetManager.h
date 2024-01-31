@class PKMobileAssetManager;

@interface PKMANotificationAuthorizationAssetManager : NSObject {
    PKMobileAssetManager *_mobileAssetManager;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_notificationAuthorizationImageFilenameForLocale:(id)a0;
- (void)downloadNotificationAuthorizationImage:(id)a0 completion:(id /* block */)a1;
- (struct CGImage { } *)notificationAuthorizationImageForLocale:(id)a0;
- (id)notificationAuthorizationString:(id)a0;

@end
