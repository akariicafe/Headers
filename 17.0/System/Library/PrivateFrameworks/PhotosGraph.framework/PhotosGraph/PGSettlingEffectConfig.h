@interface PGSettlingEffectConfig : NSObject

@property (readonly, nonatomic) unsigned long long maxL1FailuresAllowed;
@property (readonly, nonatomic) unsigned long long maxFRCRequestsAllowed;
@property (readonly, nonatomic) unsigned long long defaultL1FailuresAllowed;
@property (readonly, nonatomic) unsigned long long defaultFRCRequestsAllowed;

- (id)_requestWallpaperDownloadServerConfigWithPhotoLibrary:(id)a0 loggingConnection:(id)a1;
- (id)initWithPhotoLibrary:(id)a0 loggingConnection:(id)a1;

@end
