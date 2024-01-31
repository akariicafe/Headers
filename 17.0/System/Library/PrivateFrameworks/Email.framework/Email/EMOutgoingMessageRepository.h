@class NSMutableArray, NSNumber, NSString, NSXPCInterface, NSObject, EMRemoteConnection;
@protocol OS_os_log, EFCancelable, EFScheduler;

@interface EMOutgoingMessageRepository : NSObject <EFLoggable, EMOutgoingMessageRepositoryInterfaceObserver> {
    _Atomic BOOL _hasStartedObservingUnsentChanges;
}

@property (class, readonly) NSXPCInterface *remoteInterface;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) EMRemoteConnection *connection;
@property (retain) id<EFCancelable> registrationCancelable;
@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) NSNumber *pendingMessages;
@property (nonatomic) BOOL hasDelayedMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)signpostLog;

- (unsigned long long)signpostID;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithRemoteConnection:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)isProcessing;
- (void)numberOfPendingMessagesChanged:(id)a0;
- (void)_restartObservingUnsentChangesIfNecessary;
- (void)_startObservingUnsentChangesIfNecessary;
- (void)cancelLastDelayedMessage:(id /* block */)a0;
- (void)deleteDraftsInMailbox:(id)a0 documentID:(id)a1 previousDraftObjectID:(id)a2;
- (id)deliverMessage:(id)a0 usingMailDrop:(BOOL)a1 isCancelable:(BOOL)a2;
- (void)hasDelayedMessagesDidChange:(BOOL)a0;
- (unsigned long long)numberOfPendingMessages;
- (BOOL)outboxContainsMessageFromAccount:(id)a0;
- (void)processAllQueuedMessages;
- (id)removeSendLaterDateFromMessage:(id)a0 draftsMailboxObjectID:(id)a1;
- (void)resumeDeliveryQueue;
- (id)saveDraftMessage:(id)a0 mailboxObjectID:(id)a1 previousDraftObjectID:(id)a2;
- (id)saveSendLaterMessage:(id)a0 sendLaterDate:(id)a1;
- (void)scheduleAlarmForSendLaterDate:(id)a0 completion:(id /* block */)a1;
- (void)suspendDeliveryQueue;
- (void)updateObserversForHasDelayedMessagesDidChange;
- (void)updateObserversForPendingMessagesChange;
- (id)updateSendLaterDate:(id)a0 message:(id)a1;

@end
