@class TSDCUserFilteredClock, TSXUserFilteredClock;

@interface TSUserFilteredClock : TSKernelClock {
    TSDCUserFilteredClock *_implDC;
    TSXUserFilteredClock *_implXPC;
}

@property (readonly, nonatomic) unsigned long long nominalMachInterval;
@property (readonly, nonatomic) unsigned long long nominalDomainInterval;
@property (readonly, nonatomic) unsigned char filterShift;
@property (readonly, nonatomic, getter=isAdaptive) BOOL adaptive;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)keyPathsForValuesAffectingAdaptive;
+ (id)keyPathsForValuesAffectingFilterShift;
+ (id)keyPathsForValuesAffectingNominalDomainInterval;
+ (id)keyPathsForValuesAffectingNominalMachInterval;

- (void).cxx_destruct;
- (id)initWithImplDC:(id)a0;
- (BOOL)addTimestampWithMachAbsolute:(unsigned long long)a0 andDomainTime:(unsigned long long)a1 error:(id *)a2;
- (unsigned char)filterShift;
- (id)initWithImplXPC:(id)a0;
- (unsigned long long)nominalDomainInterval;
- (unsigned long long)nominalMachInterval;
- (BOOL)resetFilterToNominal:(BOOL)a0 error:(id *)a1;
- (BOOL)resetSyncServiceWithError:(id *)a0;
- (BOOL)waitTimeSyncTimeUpdate;

@end
