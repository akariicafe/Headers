@class NSString, MPCloudServiceStatusController;

@interface MusicKit_SoftLinking_MPCloudServiceStatusController : NSObject {
    MPCloudServiceStatusController *_underlyingServiceStatusController;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPCloudServiceStatusController *sharedController;
@property (class, readonly, nonatomic) NSString *cloudLibraryEnabledDidChangeNotificationName;

- (void)beginObservingCloudLibraryEnabled;
- (void)dealloc;
- (void).cxx_destruct;
- (void)endObservingCloudLibraryEnabled;
- (void)_handleCloudLibraryEnabledDidChangeNotification:(id)a0;
- (id)_initWithUnderlyingServiceStatusController:(id)a0;

@end
