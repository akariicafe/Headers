@class TSDKernelClock, IODConnection, NSMutableArray;

@interface TSDClockManager : NSObject {
    IODConnection *_connection;
    NSMutableArray *_clockPersonalities;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebaseInfo;
    int _pid;
}

@property (readonly, nonatomic) unsigned long long translationClockIdentifier;
@property (readonly, nonatomic) BOOL timeSyncTimeIsMachAbsoluteTime;
@property (readonly, nonatomic) TSDKernelClock *translationClock;
@property (readonly, nonatomic) unsigned long long timeSyncTimeClockIdentifier;

+ (void)initialize;
+ (id)clockManager;
+ (id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)a0;
+ (id)sharedClockManager;
+ (void)notifyWhenClockManagerIsUnavailable:(id /* block */)a0;
+ (void)notifyWhenClockManagerIsAvailable:(id /* block */)a0;
+ (id)diagnosticInfo;
+ (id)daemonClassNameForClockIdentifier:(unsigned long long)a0;
+ (id)defaultClockPersonalities;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0 daemonClassName:(id *)a1;

- (BOOL)removegPTPServicesWithError:(id *)a0;
- (id)init;
- (unsigned long long)machAbsoluteTicksToNanoseconds:(unsigned long long)a0;
- (BOOL)addgPTPServicesWithError:(id *)a0;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)a0 domainInterval:(unsigned long long)a1 usingFilterShift:(unsigned char)a2 isAdaptive:(BOOL)a3 error:(id *)a4;
- (BOOL)addMappingFromClockID:(unsigned long long)a0 toCoreAudioClockDomain:(unsigned int *)a1 error:(id *)a2;
- (BOOL)releaseDynamicClockID:(unsigned long long)a0 error:(id *)a1;
- (id)availableClockIdentifiers;
- (BOOL)removeTSNCaptureServicesWithError:(id *)a0;
- (BOOL)nextAvailableDynamicClockID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addTSNCaptureServicesWithError:(id *)a0;
- (void).cxx_destruct;
- (id)clockWithClockIdentifier:(unsigned long long)a0;
- (BOOL)removeUserFilteredClockWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (id)initWithPid:(int)a0;
- (unsigned long long)machAbsoluteNanosecondsToTicks:(unsigned long long)a0;
- (BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)a0 error:(id *)a1;
- (id)classNameForClockService:(id)a0;
- (BOOL)getTimeSyncTimeClockID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)getTimeSyncTimeIsMachAbsolute:(BOOL *)a0 error:(id *)a1;

@end
