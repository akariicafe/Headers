@interface TSDUserFilteredClock : TSDKernelClock

@property (readonly, nonatomic) unsigned long long nominalMachInterval;
@property (readonly, nonatomic) unsigned long long nominalDomainInterval;
@property (readonly, nonatomic) unsigned char filterShift;
@property (readonly, nonatomic, getter=isAdaptive) BOOL adaptive;

+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;

- (BOOL)addTimestampWithMachAbsolute:(unsigned long long)a0 andDomainTime:(unsigned long long)a1 error:(id *)a2;
- (unsigned char)filterShift;
- (unsigned long long)nominalDomainInterval;
- (unsigned long long)nominalMachInterval;
- (BOOL)resetFilterToNominal:(BOOL)a0 error:(id *)a1;
- (BOOL)resetSyncServiceWithError:(id *)a0;

@end
