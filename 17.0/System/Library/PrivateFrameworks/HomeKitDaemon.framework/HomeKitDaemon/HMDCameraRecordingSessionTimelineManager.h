@class NSString, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraRecordingSessionTimelineManager : HMFObject <HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) double fragmentDuration;
@property (readonly, copy) NSDate *fragmentCreationReferenceDate;
@property (readonly) NSMutableArray *motionActiveDateIntervals;
@property (readonly) NSMutableArray *doorbellActiveDateIntervals;
@property (readonly) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)creationDateForFragmentAtTimeOffset:(double)a0;
- (void)handleDoorbellDidActivateAtDate:(id)a0;
- (void)handleMotionActive:(BOOL)a0 didChangeAtDate:(id)a1;
- (id)initWithWorkQueue:(id)a0 fragmentDuration:(double)a1 fragmentCreationReferenceDate:(id)a2 logIdentifier:(id)a3;
- (BOOL)isDoorbellTriggerActiveAtAnyTimeAfterOffset:(double)a0;
- (BOOL)isDoorbellTriggerActiveAtAnyTimeAfterOffset:(double)a0 forDuration:(double)a1;
- (BOOL)isMotionTriggerActiveAtAnyTimeAfterOffset:(double)a0;
- (BOOL)isMotionTriggerActiveAtAnyTimeAfterOffset:(double)a0 forDuration:(double)a1;

@end
