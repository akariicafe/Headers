@class NSString, NSDictionary, NSArray;

@interface NSProcessInfo : NSObject {
    NSDictionary *environment;
    NSArray *arguments;
    NSString *hostName;
    NSString *name;
    long long automaticTerminationOptOutCounter;
}

@property (class, readonly) NSProcessInfo *processInfo;

@property (readonly, copy) NSString *userName;
@property (readonly, copy) NSString *fullUserName;
@property (readonly, getter=isMacCatalystApp) BOOL macCatalystApp;
@property (readonly, getter=isiOSAppOnMac) BOOL iOSAppOnMac;
@property (readonly, copy) NSDictionary *environment;
@property (readonly, copy) NSArray *arguments;
@property (readonly, copy) NSString *hostName;
@property (copy) NSString *processName;
@property (readonly) int processIdentifier;
@property (readonly, copy) NSString *globallyUniqueString;
@property (readonly, copy) NSString *operatingSystemVersionString;
@property (readonly) struct { long long x0; long long x1; long long x2; } operatingSystemVersion;
@property (readonly) unsigned long long processorCount;
@property (readonly) unsigned long long activeProcessorCount;
@property (readonly) unsigned long long physicalMemory;
@property (readonly) double systemUptime;
@property BOOL automaticTerminationSupportEnabled;

- (BOOL)isLowPowerModeEnabled;
- (void)dealloc;
- (void)endActivity:(id)a0;
- (void)setArguments:(id)a0;
- (BOOL)isTranslated;
- (unsigned long long)operatingSystem;
- (id)operatingSystemName;
- (void)_disableAutomaticTerminationOnly:(id)a0;
- (void)_enableAutomaticTerminationOnly:(id)a0;
- (void)_exitIfSuddenTerminationEnabledWithStatus:(int)a0;
- (void)_exitWhenSuddenTerminationEnabledWithStatus:(int)a0;
- (void)_reactivateActivity:(id)a0;
- (long long)_suddenTerminationDisablingCount;
- (id)beginActivityWithOptions:(unsigned long long)a0 reason:(id)a1;
- (id)beginSuspensionOfSystemBehaviors:(unsigned long long)a0 reason:(id)a1;
- (void)disableAutomaticTermination:(id)a0;
- (void)disableSuddenTermination;
- (void)enableAutomaticTermination:(id)a0;
- (void)enableSuddenTermination;
- (void)endSystemBehaviorSuspension:(id)a0;
- (BOOL)isOperatingSystemAtLeastVersion:(struct { long long x0; long long x1; long long x2; })a0;
- (struct { long long x0; long long x1; long long x2; })macCatalystVersion;
- (BOOL)macCatalystVersionIsAtLeastVersion:(struct { long long x0; long long x1; long long x2; })a0;
- (void)performActivityWithOptions:(unsigned long long)a0 reason:(id)a1 block:(id /* block */)a2;
- (void)performActivityWithOptions:(unsigned long long)a0 reason:(id)a1 usingBlock:(id /* block */)a2;
- (void)performExpiringActivityWithReason:(id)a0 usingBlock:(id /* block */)a1;
- (long long)thermalState;
- (id)userHomeDirectory;

@end
