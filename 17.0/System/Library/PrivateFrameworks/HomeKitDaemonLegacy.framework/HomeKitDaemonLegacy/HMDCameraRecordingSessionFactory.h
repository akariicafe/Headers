@class NSString;

@interface HMDCameraRecordingSessionFactory : HMFObject <HMDCameraRecordingSessionFactory>

@property (readonly) double maximumClipDuration;
@property (readonly) double recordingExtensionDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createSignificantEventManagerWithWorkQueue:(id)a0 faceClassificationResolver:(id)a1 logIdentifier:(id)a2;
- (id)createTimelapseFragmentManagerWithLogIdentifier:(id)a0;
- (id)createUploaderWithClipUUID:(id)a0 startDate:(id)a1 targetFragmentDuration:(double)a2 quality:(long long)a3 localZone:(id)a4 workQueue:(id)a5 logIdentifier:(id)a6;
- (id)createVideoAnalyzerWithConfiguration:(id)a0 identifier:(id)a1;
- (BOOL)isVideoInitData:(id)a0 combinableWithVideoInitData:(id)a1;

@end
