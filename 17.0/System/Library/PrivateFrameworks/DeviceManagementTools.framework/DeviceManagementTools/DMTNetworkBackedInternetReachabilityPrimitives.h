@class NSString, NWPathEvaluator, NSObject;
@protocol OS_dispatch_queue, OS_nw_path_monitor;

@interface DMTNetworkBackedInternetReachabilityPrimitives : NSObject <DMTInternetReachabilityPrimitives>

@property (nonatomic) BOOL reachable;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *reachabilityMonitorQueue;
@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (readonly, nonatomic) NWPathEvaluator *pathEvaluator;
@property (copy, nonatomic) id /* block */ statusChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
