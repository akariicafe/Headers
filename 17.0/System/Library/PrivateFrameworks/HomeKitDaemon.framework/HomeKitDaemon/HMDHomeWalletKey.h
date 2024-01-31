@class NSString, NSUUID, NSURL, HMDHomeWalletKeySecureElementInfo;

@interface HMDHomeWalletKey : HMFObject <NSCopying, NSMutableCopying>

@property (copy) NSString *walletKeyDescription;
@property (copy) NSString *homeName;
@property long long state;
@property (copy) NSString *accessCode;
@property (copy) NSURL *changeAccessCodeHomeAppCustomURL;
@property (copy) HMDHomeWalletKeySecureElementInfo *nfcInfo;
@property (copy) NSURL *customURL;
@property long long color;
@property (readonly, copy) NSString *typeIdentifier;
@property (readonly, copy) NSString *serialNumber;
@property (readonly, copy) NSString *passColorValue;
@property (readonly, copy) NSString *labelColorValue;
@property (readonly, copy) NSUUID *uuid;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPKPass:(id)a0;
- (id)xpcWalletKeyWithExpressEnabled:(BOOL)a0;
- (id)initWithTypeIdentifier:(id)a0 serialNumber:(id)a1 state:(long long)a2 walletKeyDescription:(id)a3 homeName:(id)a4 color:(long long)a5 nfcInfo:(id)a6;

@end
