@class _HKDelayedOperation, NSSet, HDHealthAppSharingReminderRestorableAlarm, HDHealthAppRestorableAlarmManager, NSString, NSObject, HDDaemon;
@protocol OS_dispatch_queue;

@interface HDHealthAppDaemonExtension : NSObject <HDHealthDaemonReadyObserver, HDProfileReadyObserver, HDProfileManagerObserver, HDPostInstallUpdateTaskHandler, HDSharedSummaryManagerObserver, HDSummarySharingEntryObserver, IDSServiceDelegate, HDProfileExtension, HDHealthDaemonExtension>

@property (retain, nonatomic) HDDaemon *daemon;
@property (retain, nonatomic) NSSet *observedProfileIdentifiers;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } observerLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) _HKDelayedOperation *delayedOperation;
@property (retain, nonatomic) HDHealthAppRestorableAlarmManager *restorableAlarmManager;
@property (retain, nonatomic) HDHealthAppSharingReminderRestorableAlarm *sharableReminderAlarm;
@property (copy, nonatomic) id /* block */ unitTest_profileReadyObserverDidFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void)daemonReady:(id)a0;
- (id)initWithDaemon:(id)a0;
- (void)sharedSummaryManagerCommittedTransactionsDidChange:(id)a0;
- (id)initWithDaemon:(id)a0 queue:(id)a1;
- (void)dealloc;
- (void)updateSharingReminderScheduledAlarm;
- (void)profileListDidChange;
- (void)resetProfileObservers;
- (void).cxx_destruct;
- (void)sharingEntriesDidUpdate:(id)a0;
- (void)performPostInstallUpdateTaskForManager:(id)a0 completion:(id /* block */)a1;

@end
