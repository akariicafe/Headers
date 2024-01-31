@class NSString;
@protocol HDWatchAppStateMonitorDelegate;

@interface HDWatchAppStateMonitor : NSObject <FBSDisplayLayoutObserver> {
    NSString *_bundleIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL appIsActive;
@property (weak, nonatomic) id<HDWatchAppStateMonitorDelegate> delegate;

+ (void)launchWorkoutAppIfNeededWithFitnessMachineSessionUUID:(id)a0;

- (void)dealloc;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (id)initWithFirstPartyWorkoutApp;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;

@end
