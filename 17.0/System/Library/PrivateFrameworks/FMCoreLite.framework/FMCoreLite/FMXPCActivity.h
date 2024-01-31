@class NSString, FMQueueSynchronizer, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface FMXPCActivity : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMQueueSynchronizer *queueSynchronizer;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ criteriaBlock;
@property (copy, nonatomic) id /* block */ handlerBlock;
@property (weak, nonatomic) NSObject<OS_xpc_object> *activity;
@property (nonatomic) BOOL checkedInAtLeastOnce;
@property (copy, nonatomic) id /* block */ registrationBlock;

- (void)unregister;
- (void)register;
- (id)getCriteria;
- (BOOL)shouldDefer;
- (BOOL)continue;
- (BOOL)defer;
- (long long)updateCriteriaForActivity:(id)a0;
- (id)_getActivity;
- (BOOL)done;
- (void)updateCriteria;
- (id)initWithName:(id)a0 qos:(unsigned int)a1 criteriaBlock:(id /* block */)a2 handler:(id /* block */)a3;
- (void)activityHandler:(id)a0;
- (void).cxx_destruct;
- (void)processCheckin:(id)a0;

@end
