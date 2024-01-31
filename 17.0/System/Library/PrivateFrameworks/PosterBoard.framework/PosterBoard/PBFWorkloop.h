@class NSObject;
@protocol OS_dispatch_workloop;

@interface PBFWorkloop : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_workloop> *sharedDaemonWorkloop;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_workloop> *snapshottingWorkloop;

+ (id)serialQueueTargetingWorkloop:(id)a0 label:(id)a1 withQoS:(unsigned int)a2;
+ (id)concurrentQueueTargetingWorkloop:(id)a0 label:(id)a1 withQoS:(unsigned int)a2;
+ (id)serialQueueTargetingSharedWorkloop:(id)a0;
+ (id)serialQueueTargetingSharedWorkloop:(id)a0 withQoS:(unsigned int)a1;

@end
