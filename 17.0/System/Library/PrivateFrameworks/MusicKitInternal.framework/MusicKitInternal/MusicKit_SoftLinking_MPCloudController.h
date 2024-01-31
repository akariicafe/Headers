@class NSString, MPCloudController;

@interface MusicKit_SoftLinking_MPCloudController : NSObject {
    MPCloudController *_underlyingCloudController;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPCloudController *sharedCloudController;
@property (class, readonly, nonatomic) NSString *canShowCloudDownloadButtonsDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *isUpdateInProgressDidChangeNotificationName;

@property (readonly, nonatomic) BOOL canShowCloudDownloadButtons;
@property (readonly, nonatomic, getter=isUpdateInProgress) BOOL updateInProgress;

- (void)becomeActive;
- (void)dealloc;
- (long long)cloudAddToPlaylistBehavior;
- (void)resignActive;
- (void).cxx_destruct;
- (void)setCloudAddToPlaylistBehavior:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_handleCanShowCloudDownloadButtonsDidChangeNotification:(id)a0;
- (void)_handleIsUpdateInProgressDidChangeNotificationName:(id)a0;
- (id)_initWithUnderlyingCloudController:(id)a0;

@end
