@class NSSet, NSMutableSet, STTelephonyStatusDomain;

@interface SBAppRepairTransaction : SBTransaction {
    NSMutableSet *_repairRequests;
    STTelephonyStatusDomain *_telephonyDomain;
}

@property (readonly, copy, nonatomic) NSSet *appInfos;

- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_begin;
- (void).cxx_destruct;
- (void)_evaluateCompletion;
- (void)_completeRequest:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)_startAppRepairs;
- (id)initWithApplicationInfos:(id)a0;

@end
