@class TUCallCenter, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TURTCCallReporter : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *callUUIDToConversation;
@property (readonly, nonatomic) TUCallCenter *callCenter;

- (id)initWithCallCenter:(id)a0;
- (void)callStatusChangedNotification:(id)a0;
- (id)reportingSessionForCall:(id)a0 withConversation:(id)a1;
- (id)serviceName:(id)a0 withConversation:(id)a1;
- (id)rtcCallInfoDictionary:(id)a0 withConversation:(id)a1;
- (void)report:(id)a0 withConversation:(id)a1;
- (void).cxx_destruct;
- (id)clientName:(id)a0;

@end
