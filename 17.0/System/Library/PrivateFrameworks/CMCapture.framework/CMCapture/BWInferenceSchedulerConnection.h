@class BWInferenceSchedulerFramebuffer, BWInferenceSchedulerResourceCoordinator, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface BWInferenceSchedulerConnection : NSObject

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *inferenceQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *scalingQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *submissionQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *coordinationGroup;
@property (readonly, nonatomic) BWInferenceSchedulerResourceCoordinator *coordinator;
@property (retain, nonatomic) BWInferenceSchedulerFramebuffer *framebuffer;

- (id)init;
- (void)dealloc;
- (id)initWithInferenceTargetQueue:(id)a0 scalingTargetQueue:(id)a1 submissionTargetQueue:(id)a2 completionTargetQueue:(id)a3;

@end
