@class HMBLocalZone, NSString, NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraClipImporter : HMFObject <HMFLogging>

@property (readonly) HMBLocalZone *localZone;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSString *logIdentifier;
@property (readonly, copy) NSUUID *cameraProfileUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)importClipsWithImportData:(id)a0;
- (id)initWithLocalZone:(id)a0 cameraProfileUUID:(id)a1;

@end
