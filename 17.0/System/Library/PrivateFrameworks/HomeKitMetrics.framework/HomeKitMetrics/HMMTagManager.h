@class NSString, NSObject;
@protocol OS_dispatch_queue, HMMLogEventSubmitting, HMMTagDispatching;

@interface HMMTagManager : NSObject <HMMTagDispatching>

@property (retain) id<HMMTagDispatching> currentDispatcher;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)registerTagObserver:(id)a0 forTags:(id)a1;
- (void)resetTagDispatcher;
- (void)setTagDispatcher:(id)a0;
- (void)submitTaggedEvent:(id)a0 processorList:(id)a1;
- (void)unregisterTagObserver:(id)a0 forTags:(id)a1;

@end
