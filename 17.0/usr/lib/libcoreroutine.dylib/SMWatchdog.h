@class NSDate, NSString, RTTimer, SMWatchdogRecord, NSMutableArray, RTDefaultsManager, NSObject, RTTimerManager;
@protocol OS_dispatch_queue;

@interface SMWatchdog : NSObject <SMSessionManagerObserverProtocol>

@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SMWatchdogRecord *mostRecentRecord;
@property (nonatomic) double heartbeatInterval;
@property (retain, nonatomic) RTTimer *watchdogTimer;
@property (retain, nonatomic) NSDate *watchdogTimerFireDate;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) NSMutableArray *records;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addRecord:(id)a0;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)shutdownWithHandler:(id /* block */)a0;
- (void)_checkInAllRecords;
- (void).cxx_destruct;
- (void)_addRecord:(id)a0;
- (void)removeRecord:(id)a0;
- (void)_addStateToWatchdog:(id)a0;
- (id)_createRecord:(id)a0 timeoutLimit:(double)a1;
- (double)_fetchTimeoutValueForState:(unsigned long long)a0;
- (void)_removeRecord:(id)a0;
- (void)_setUpWatchdogTimerToFireWithDate:(id)a0;
- (void)_updateTimerBasedOnRecords;
- (void)_updateTimerIfNeeded:(id)a0;
- (void)handleStateChange:(id)a0 forActiveDevice:(BOOL)a1;
- (id)initWithDefaultsManager:(id)a0 handler:(id /* block */)a1;
- (void)onSessionResumedWithState:(id)a0 forActiveDevice:(BOOL)a1;
- (void)onSessionStateChanged:(id)a0 forActiveDevice:(BOOL)a1;
- (void)receiveHeartbeatForSessionID:(id)a0 handler:(id /* block */)a1;

@end
