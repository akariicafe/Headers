@class EDQueryCreator, NSString, EDMessagePersistence, EFXPCAlarm, EDOutgoingMessageRepository, NSObject, NSDate;
@protocol OS_os_log, EDMessageChangeHookResponder, EDSendLaterUpdateControllerAlarmDateProvider, OS_dispatch_queue;

@interface EDSendLaterUpdateController : NSObject <EFLoggable, EDMessageChangeHookResponder> {
    NSObject<OS_dispatch_queue> *_alarmQueue;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDOutgoingMessageRepository *outgoingRepository;
@property (retain, nonatomic) NSDate *nextAlarmDate;
@property (readonly, nonatomic) id<EDMessageChangeHookResponder> hookResponder;
@property (retain, nonatomic) EDQueryCreator *sendLaterQueryCreator;
@property (readonly, nonatomic) id<EDSendLaterUpdateControllerAlarmDateProvider> alarmDateProvider;
@property (retain, nonatomic) EFXPCAlarm *xpcAlarm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)persistenceDidUpdateSendLaterDate:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)_updateAlarmUpdatedMessages:(id)a0 sendLaterDate:(id)a1;
- (id)initWithHookRegistry:(id)a0 messagePersistence:(id)a1 outgoingRepository:(id)a2 alarmScheduler:(id)a3;
- (void)resetSendLaterAlarmIfNeeded;
- (void).cxx_destruct;
- (void)_alarmFired;

@end
