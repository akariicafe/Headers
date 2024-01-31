@class NSObject, _TtC13SafetyMonitor23SMCloudKitFunctionSwift;
@protocol OS_dispatch_queue;

@interface SMCloudKitFunction : NSObject

@property (retain, nonatomic) _TtC13SafetyMonitor23SMCloudKitFunctionSwift *swiftCKF;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithEnvironment:(unsigned long long)a0 version:(id)a1 queue:(id)a2;
- (void)requestSafetyCacheRecordFromZone:(id)a0 withToken:(id)a1 completion:(id /* block */)a2;

@end
