@class NSObject;
@protocol OS_xpc_object, OS_nw_activity;

@interface COAlarmServiceClient : COCoordinationServiceClient

@property (readonly, nonatomic) NSObject<OS_xpc_object> *clientLifetimeActivityMetrics;
@property (nonatomic) int clientLifetimeActivityCompletionReason;
@property (readonly, nonatomic) NSObject<OS_nw_activity> *clientLifetimeActivity;

- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)changeClientLifetimeActivityMetrics:(id /* block */)a0;
- (void)donateClientLifetimeActivityCompletionReason:(int)a0;

@end
