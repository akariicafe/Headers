@interface BLSHDisableFlipbookPowerSavingAttribute : BLSAttribute

@property (readonly, nonatomic) unsigned long long reason;

+ (id)disablePowerSavingForReason:(unsigned long long)a0;

- (BOOL)checkEntitlementSourceForRequiredEntitlements:(id)a0 error:(out id *)a1;

@end
