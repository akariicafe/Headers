@class TSXgPTPClock, NSString;

@interface TSXgPTPClockExported : NSObject <TSXgPTPClockClientProtocol>

@property (weak, nonatomic) TSXgPTPClock *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)beginGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1;
- (void)changeLocalPortGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1;
- (void)changedClockMaster;
- (void)endGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1;
- (void)resetClock;
- (void)updateGrandmasterIdentity:(unsigned long long)a0 andgPTPPath:(id)a1;
- (void)updateLockState:(int)a0;
- (void)updateTimeSyncTime:(unsigned long long)a0 timeSyncInterval:(unsigned long long)a1 domainTime:(unsigned long long)a2 domainInterval:(unsigned long long)a3;
- (void)updateWithSyncInfoValid:(BOOL)a0 syncFlags:(unsigned char)a1 timeSyncTime:(unsigned long long)a2 domainTimeHi:(unsigned long long)a3 domainTimeLo:(unsigned long long)a4 cumulativeScaledRate:(unsigned long long)a5 inverseCumulativeScaledRate:(unsigned long long)a6 grandmasterID:(unsigned long long)a7 localPortNumber:(unsigned short)a8;

@end
