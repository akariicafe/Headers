@class HMBLocalZone, NSString, NSUUID, NSArray, NSDate, HMDCameraRecordingUploadOperationEvent;
@protocol HMDCameraClipOperationDataSource;

@interface HMDCameraClipOperation : HMFOperation <HMFObject, HMFLogging>

@property (class, readonly) unsigned long long cameraClipOperationType;

@property (readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) double executionDuration;
@property (copy) NSDate *startDate;
@property (copy) NSDate *endDate;
@property (readonly) id<HMDCameraClipOperationDataSource> dataSource;
@property (readonly) NSUUID *clipModelID;
@property (readonly) HMBLocalZone *localZone;
@property (readonly) HMDCameraRecordingUploadOperationEvent *uploadOperationEvent;
@property (readonly) double queuedDuration;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (void)finish;
- (void)main;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (void)_markEndDateAndSubmitUploadOperationEvent;
- (id)fetchClipModel;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 dataSource:(id)a2;
- (id)updateClipModel:(id)a0;

@end
