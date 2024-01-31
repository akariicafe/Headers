@class NSString, HMCameraProfile;

@interface HFCameraVideoDownloader : NSObject <HFCameraVideoDownloader>

@property (weak, nonatomic) HMCameraProfile *cameraProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)a0;
- (id)_downloadOperationForClip:(id)a0;
- (id)_fetchOperationForClip:(id)a0 withClipManager:(id)a1;
- (id)downloadOperationForClip:(id)a0;
- (id)priorityDownloadOperationForClip:(id)a0;

@end
