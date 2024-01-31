@class NSMutableSet;

@interface CKDSystemAvailabilityMonitor : NSObject

@property (retain, nonatomic) NSMutableSet *watcherWrappers;
@property unsigned long long availabilityState;
@property unsigned long long simulatedAvailabilityState;

+ (void)initialize;
+ (id)sharedMonitor;

- (id)availabilityDescription;
- (void)removeNotifications;
- (void)dealloc;
- (id)initInternal;
- (void)_clearVanishedWatchers;
- (void)simulateBuddyCompletedForUnitTests;
- (unsigned long long)currentAvailabilityState;
- (void)resetToUnavailableForUnitTests;
- (void)assertAvailability:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)simulateFirstUnlockForUnitTests;
- (BOOL)deviceUnlockedSinceBoot;
- (void)_logAvailabilityDescription;
- (BOOL)registerWatcher:(id)a0;
- (void)_systemMayNowBeReady;

@end
