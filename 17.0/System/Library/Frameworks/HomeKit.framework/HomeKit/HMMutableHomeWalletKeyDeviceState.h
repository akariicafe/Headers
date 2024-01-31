@class NSString, HMHomeWalletKey;

@interface HMMutableHomeWalletKeyDeviceState : HMHomeWalletKeyDeviceState

@property (copy) HMHomeWalletKey *walletKey;
@property (copy) NSString *expressEnablementConflictingPassDescription;
@property long long canAddWalletKeyErrorCode;
@property BOOL canAddWalletKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
