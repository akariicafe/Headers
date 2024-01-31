@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDMessageFilter : HMFObject <HMFLogging>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)resetConfiguration;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)acceptMessage:(id)a0 target:(id)a1 errorReason:(id *)a2;
- (BOOL)shouldCloudSyncData;

@end
