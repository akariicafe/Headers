@class NSArray, NSMutableDictionary, NSString, SMSessionStore, NSObject, RTDarwinNotificationHelper;
@protocol OS_dispatch_queue, SMTriggerManagerProtocol;

@interface SMTriggerSOS : NSObject <SMTriggerProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *sosEvents;
@property (retain, nonatomic) NSArray *SOSNotifications;
@property (retain, nonatomic) SMSessionStore *sessionStore;
@property (retain, nonatomic) RTDarwinNotificationHelper *darwinSOSNotificationHelper;
@property (weak, nonatomic) id<SMTriggerManagerProtocol> sessionMonitorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stopMonitoringWithHandler:(id /* block */)a0;
- (void)handleSOSNotificationForReason:(id)a0;
- (void)_handleSOSNotificationForReason:(id)a0;
- (void)_notifySOSTriggerWithCategory:(unsigned long long)a0;
- (void)_startMonitoringWithConfiguration:(id)a0 handler:(id /* block */)a1;
- (void)_stopMonitoringWithHandler:(id /* block */)a0;
- (id)initWithQueue:(id)a0 sessionStore:(id)a1;
- (void)onRemoteEmergencyContactsNotified:(unsigned long long)a0;
- (void)startMonitoringWithConfiguration:(id)a0 handler:(id /* block */)a1;

@end
