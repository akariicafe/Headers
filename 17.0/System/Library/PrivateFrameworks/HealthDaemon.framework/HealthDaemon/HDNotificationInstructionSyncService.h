@class HKObserverSet, NSString, HKAnalyticsEventSubmissionManager, NSMutableDictionary, HDIDSService, NSDate;
@protocol HDNotificationInstructionSyncServiceObserver, HDHealthDaemon;

@interface HDNotificationInstructionSyncService : NSObject <HDIDSServiceDelegate, HDDiagnosticObject> {
    HKObserverSet<HDNotificationInstructionSyncServiceObserver> *_observers;
    id<HDHealthDaemon> _daemon;
    HKAnalyticsEventSubmissionManager *_analyticsEventSubmissionManager;
    NSMutableDictionary *_lock_pendingMessages;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HDIDSService *IDSService;
@property (nonatomic) BOOL unitTest_sendOnEmptyDestinationSet;
@property (copy, nonatomic) NSDate *unitTest_currentDate;
@property (copy, nonatomic) id /* block */ unitTest_didSendInstructionWithSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDaemon:(id)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)diagnosticDescription;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithDaemon:(id)a0 IDSService:(id)a1 analyticsEventManager:(id)a2;
- (BOOL)sendNotificationInstructionMessage:(id)a0 error:(id *)a1;
- (void)service:(id)a0 didReceiveMessage:(id)a1 fromDevice:(id)a2 messageContext:(id)a3;
- (void)service:(id)a0 didSendWithSuccess:(BOOL)a1 identifier:(id)a2 error:(id)a3;

@end
