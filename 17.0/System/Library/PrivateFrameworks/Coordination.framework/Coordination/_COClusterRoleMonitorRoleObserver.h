@class NSSet, COClusterRole, NSObject;
@protocol OS_dispatch_queue;

@interface _COClusterRoleMonitorRoleObserver : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSSet *lastValue;
@property (readonly, nonatomic) COClusterRole *role;
@property (readonly, nonatomic) id cluster;

- (id)description;
- (void).cxx_destruct;
- (void)notify:(id)a0;
- (id)initWithRole:(id)a0 inCluster:(id)a1 queue:(id)a2 block:(id /* block */)a3;

@end
