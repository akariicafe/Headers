@class NSDictionary;
@protocol HMMRTCBackendSession;

@interface HMMRTCSession : HMMNullRTCSession

@property (readonly, nonatomic) NSDictionary *commonFields;
@property (readonly, nonatomic) id<HMMRTCBackendSession> backend;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 serviceName:(id)a1 commonFields:(id)a2 backend:(id)a3;
- (void)submitEventWithName:(id)a0 payload:(id)a1;

@end
