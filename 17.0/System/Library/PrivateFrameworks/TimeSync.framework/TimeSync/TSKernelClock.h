@class TSXKernelClock, NSPointerArray, TSDCKernelClock;

@interface TSKernelClock : TSClock {
    TSDCKernelClock *_implDC;
    TSXKernelClock *_implXPC;
    NSPointerArray *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
}

@property (copy, nonatomic) id /* block */ interruptionHandler;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)clockNameForClockIdentifier:(unsigned long long)a0;
+ (id)availableKernelClockIdentifiers;
+ (id)keyPathsForValuesAffectingClockName;
+ (id)keyPathsForValuesAffectingHostRateRatio;
+ (id)keyPathsforvaluesaffectingLockState;

- (void)addClient:(id)a0;
- (void)dealloc;
- (void)removeClient:(id)a0;
- (int)lockState;
- (void)interruptedConnection;
- (void).cxx_destruct;
- (id)initWithImplDC:(id)a0;
- (id)clockName;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)a0;
- (unsigned long long)convertFromDomainIntervalToTimeSyncTimeInterval:(unsigned long long)a0;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toMachAbsoluteTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toTimeSyncTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0;
- (unsigned long long)convertFromDomainToTimeSyncTime:(unsigned long long)a0;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)a0;
- (BOOL)convertFromMachAbsoluteTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0;
- (BOOL)convertFromTimeSyncTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromTimeSyncTimeIntervalToDomainInterval:(unsigned long long)a0;
- (unsigned long long)convertFromTimeSyncToDomainTime:(unsigned long long)a0;
- (void)didBeginClockGrandmasterChange;
- (void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1;
- (void)didChangeClockMaster;
- (void)didChangeLocalPortWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1;
- (void)didChangeLockStateTo:(int)a0;
- (void)didEndClockGrandmasterChange;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1;
- (void)didProcessSync;
- (void)didResetClock;
- (BOOL)getMachAbsoluteRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (BOOL)getTimeSyncTimeRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 timeSyncAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (double)hostRateRatio;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (id)initWithImplXPC:(id)a0;
- (void)setPropertyUpdateQueue:(id)a0;

@end
