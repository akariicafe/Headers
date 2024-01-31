@class NSString, NSURL, HMDHomeWalletKeySecureElementInfo;

@interface HMDMutableHomeWalletKey : HMDHomeWalletKey

@property (copy) NSString *walletKeyDescription;
@property (copy) NSString *homeName;
@property long long state;
@property (copy) NSString *accessCode;
@property (copy) NSURL *changeAccessCodeHomeAppCustomURL;
@property (copy) NSURL *customURL;
@property long long color;
@property (copy) HMDHomeWalletKeySecureElementInfo *nfcInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
