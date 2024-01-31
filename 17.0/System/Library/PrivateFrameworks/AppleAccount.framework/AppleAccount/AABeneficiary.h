@class NSUUID, NSString, AKInheritanceAccessKey;

@interface AABeneficiary : NSObject <AAInheritanceContact, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *beneficiaryID;
@property (readonly, nonatomic) NSString *benefactorAltDSID;
@property (retain, nonatomic) AKInheritanceAccessKey *accessKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBeneficiaryID:(id)a0 benefactorAltDSID:(id)a1;

@end
