@class NSString;

@interface HMDCameraClipUploaderFactory : NSObject <HMDCameraClipUploaderFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createAddSignificantEventOperationForClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2 homePresenceByPairingIdentity:(id)a3;
- (id)createCreateClipOperationForClipModelID:(id)a0 localZone:(id)a1 targetFragmentDuration:(double)a2 clipStartDate:(id)a3 quality:(long long)a4 encryptionManager:(id)a5;
- (id)createCreateClipWithSignificantEventOperationForClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2 homePresenceByPairingIdentity:(id)a3 targetFragmentDuration:(double)a4 clipStartDate:(id)a5 quality:(long long)a6 encryptionManager:(id)a7;
- (id)createFinalizeClipOperationForModelID:(id)a0 localZone:(id)a1;
- (id)createUploadVideoSegmentOperationForModelID:(id)a0 localZone:(id)a1 data:(id)a2 metadata:(id)a3 encryptionManager:(id)a4;

@end
