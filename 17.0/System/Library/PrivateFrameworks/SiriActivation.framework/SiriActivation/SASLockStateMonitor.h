@class NSNumber;
@protocol SASLockStateMonitorDelegate;

@interface SASLockStateMonitor : NSObject

@property (nonatomic) unsigned long long lockState;
@property (nonatomic) BOOL unlockedByTouchID;
@property (retain, nonatomic) NSNumber *assistantIsEnabled;
@property (weak, nonatomic) id<SASLockStateMonitorDelegate> delegate;

- (BOOL)isScreenOn;
- (id)init;
- (void)_updateLockState;
- (void)dealloc;
- (BOOL)hasUnlockedSinceBoot;
- (void)_lockStateDidChange:(id)a0;
- (BOOL)isBlocked;
- (void).cxx_destruct;
- (unsigned long long)_currentLockState;

@end
