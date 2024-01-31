@class NSString, HDSPDeviceUnlockMonitor;
@protocol HDSPSleepSessionPersistence, HDSPSleepSessionManagerDelegate;

@interface HDSPSleepSessionManager : NSObject <HDSPSleepTrackerDelegate, HDSPDeviceUnlockObserver>

@property (readonly, nonatomic) id<HDSPSleepSessionPersistence> persistence;
@property (readonly, nonatomic) HDSPDeviceUnlockMonitor *deviceUnlockManager;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } sessionLock;
@property (weak, nonatomic) id<HDSPSleepSessionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_archivedSessionFile;
+ (id)_archivedSessionDirectory;

- (void)stopSession;
- (id)initWithEnvironment:(id)a0;
- (BOOL)_hasUnprocessedSessions;
- (void)savePendingSessions;
- (void)_locked_savePendingSessions;
- (void)archiveSession:(id)a0;
- (void)removeSessionDataFile;
- (id)initWithEnvironment:(id)a0 persistence:(id)a1;
- (void)_waitForFirstUnlock;
- (void)deviceHasBeenUnlocked;
- (void).cxx_destruct;
- (id)saveSession:(id)a0;
- (void)startSession;
- (id)_unprocessedSessions;
- (void)sleepTrackerDidStartSession:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)sleepTracker:(id)a0 didEndSession:(id)a1 reason:(unsigned long long)a2;

@end
