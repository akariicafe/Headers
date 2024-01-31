@class NSString, NSDictionary, MCProfileConnection, NSObject, SBSecurityDefaults;
@protocol OS_dispatch_queue, SBFUserAuthenticationModelDelegate;

@interface SBFUserAuthenticationModelJournaledDefaults : NSObject <SBFUserAuthenticationModel> {
    MCProfileConnection *_profileConnection;
    SBSecurityDefaults *_securityDefaults;
    NSString *_journalPath;
    NSObject<OS_dispatch_queue> *_persistentStateQueue;
    BOOL _speculativePasscodeFailureChargeOutstanding;
    NSDictionary *_originalDefaultsForRollback;
    BOOL _pendingWipe;
    BOOL _permanentlyBlocked;
    double _unblockTime;
}

@property (nonatomic) id<SBFUserAuthenticationModelDelegate> delegate;
@property (readonly, nonatomic, getter=isTemporarilyBlocked) BOOL temporarilyBlocked;
@property (readonly, nonatomic, getter=isPermanentlyBlocked) BOOL permanentlyBlocked;
@property (readonly, nonatomic, getter=isUserRequestedEraseEnabled) BOOL userRequestedEraseEnabled;
@property (readonly, nonatomic) double timeUntilUnblockedSinceReferenceDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_journaledDefaultsAndTypes;

- (void)clearBlockedState;
- (id)init;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeUnlockFailedWithError:(id)a0;
- (void)performPasswordTest:(id /* block */)a0;
- (BOOL)_isDeviceWipePreferenceEnabled;
- (void).cxx_destruct;
- (void)notePasscodeEntryCancelled;
- (void)synchronize;
- (void)notePasscodeUnlockSucceeded;
- (id)_copyLockControllerDefaults;
- (void)_evaluatePendingWipe;
- (id)_initWithJournalPath:(id)a0 securityDefaults:(id)a1 profileConnection:(id)a2;
- (void)_loadLockControllerDefaults:(id)a0;
- (void)_loadLockControllerDefaultsJournalIfNecessary;
- (void)_persistentStateQueue_beginSpeculativeFailureCharge;
- (void)_persistentStateQueue_cancelSpeculativeFailureCharge;
- (void)_persistentStateQueue_clearBlockedState;
- (void)_persistentStateQueue_evaluatePendingWipe;
- (void)_persistentStateQueue_loadLockState;
- (void)_persistentStateQueue_unlockFailedWithError:(id)a0;
- (void)_persistentStateQueue_unlockSucceeded;
- (void)_updateLockControllerDefaultsJournal;
- (void)test_reloadState;
- (id)updateLockControllerDefaultsWithBlock:(id /* block */)a0 journaled:(BOOL)a1;

@end
