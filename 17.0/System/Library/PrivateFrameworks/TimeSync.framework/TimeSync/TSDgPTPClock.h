@class NSArray, NSPointerArray;

@interface TSDgPTPClock : TSDKernelClock {
    NSPointerArray *_implClocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _implClocksLock;
}

@property (copy, nonatomic) NSArray *gptpPath;
@property (nonatomic) unsigned long long grandmasterIdentity;
@property (readonly, copy, nonatomic) NSArray *ports;
@property (readonly, nonatomic) unsigned long long clockIdentity;
@property (readonly, nonatomic) unsigned char clockPriority1;
@property (readonly, nonatomic) unsigned char clockPriority2;
@property (readonly, nonatomic) unsigned char clockClass;
@property (readonly, nonatomic) unsigned char clockAccuracy;

+ (id)clockNameForClockIdentifier:(unsigned long long)a0;
+ (id)availablegPTPClockIdentifiers;
+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;

- (void)dealloc;
- (id)ports;
- (void).cxx_destruct;
- (unsigned long long)convertFromDomainTimeToTimeSyncTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (unsigned long long)convertFromTimeSyncTimeToDomainTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (id)_gptpPath;
- (unsigned long long)_grandmasterIdentity;
- (void)_handleInterestNotification:(unsigned int)a0 withArgument:(void *)a1;
- (void)_handleNotification:(unsigned int)a0 withArg1:(unsigned long long)a1 andArg2:(unsigned long long)a2;
- (void)_handleRefreshConnection;
- (void)_refreshGrandmasterIdentityOnNotificationQueue;
- (void)addImplClock:(id)a0;
- (BOOL)addLinkLayerPortOnInterfaceNamed:(id)a0 allocatedPortNumber:(unsigned short *)a1 error:(id *)a2;
- (BOOL)addReverseSyncOnInterfaceNamed:(id)a0 withDomainNumner:(unsigned char)a1 syncInterval:(unsigned int)a2 error:(id *)a3;
- (BOOL)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (BOOL)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (BOOL)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (BOOL)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (BOOL)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (BOOL)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 allocatedPortNumber:(unsigned short *)a2 error:(id *)a3;
- (unsigned char)clockAccuracy;
- (unsigned char)clockClass;
- (unsigned long long)clockIdentity;
- (id)clockName;
- (unsigned char)clockPriority1;
- (unsigned char)clockPriority2;
- (unsigned long long)convertFrom128BitgPTPTimeToMachAbsoluteTime:(struct { unsigned long long x0; unsigned long long x1; })a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (unsigned long long)convertFrom128BitgPTPTimeToTimeSyncTime:(struct { unsigned long long x0; unsigned long long x1; })a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (BOOL)convertFrom32BitASTime:(unsigned int *)a0 toMachAbsoluteTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (BOOL)convertFrom32BitASTime:(unsigned int *)a0 toTimeSyncTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned int)a0;
- (unsigned long long)convertFrom32BitASToTimeSyncTime:(unsigned int)a0;
- (struct { unsigned long long x0; unsigned long long x1; })convertFromMachAbsoluteTo128BitgPTPTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (struct { unsigned long long x0; unsigned long long x1; })convertFromTimeSyncTimeTo128BitgPTPTime:(unsigned long long)a0 grandmasterUsed:(unsigned long long *)a1 portNumber:(unsigned short *)a2;
- (id)gPTPTimeFromMachAbsoluteTime:(unsigned long long)a0;
- (id)gPTPTimeFromTimeSyncTime:(unsigned long long)a0;
- (BOOL)getMachAbsoluteRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 forGrandmasterIdentity:(unsigned long long *)a4 portNumber:(unsigned short *)a5 withError:(id *)a6;
- (BOOL)getSyncInfoWithSyncInfoValid:(BOOL *)a0 syncFlags:(char *)a1 timeSyncTime:(unsigned long long *)a2 domainTimeHi:(unsigned long long *)a3 domainTimeLo:(unsigned long long *)a4 cumulativeScaledRate:(unsigned long long *)a5 inverseCumulativeScaledRate:(unsigned long long *)a6 grandmasterID:(unsigned long long *)a7 localPortNumber:(unsigned short *)a8 error:(id *)a9;
- (BOOL)getTimeSyncTimeRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 timeSyncAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 forGrandmasterIdentity:(unsigned long long *)a4 portNumber:(unsigned short *)a5 withError:(id *)a6;
- (id)initWithClockIdentifier:(unsigned long long)a0 pid:(int)a1;
- (unsigned long long)machAbsoluteFromgPTPTime:(id)a0;
- (id)portWithPortNumber:(unsigned short)a0;
- (void)removeImplClock:(id)a0;
- (BOOL)removeLinkLayerPortFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeReverseSyncFromInterfaceNamed:(id)a0 withDomainNumner:(unsigned char)a1 error:(id *)a2;
- (BOOL)removeUnicastLinkLayerEtEPortFromInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (BOOL)removeUnicastLinkLayerPtPPortFromInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (BOOL)removeUnicastUDPv4EtEPortFromInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 error:(id *)a2;
- (BOOL)removeUnicastUDPv4PtPPortFromInterfaceNamed:(id)a0 withDestinationAddress:(unsigned int)a1 error:(id *)a2;
- (BOOL)removeUnicastUDPv6EtEPortFromInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (BOOL)removeUnicastUDPv6PtPPortFromInterfaceNamed:(id)a0 withDestinationAddress:(const char *)a1 error:(id *)a2;
- (unsigned long long)timeSyncTimeFromgPTPTime:(id)a0;

@end
