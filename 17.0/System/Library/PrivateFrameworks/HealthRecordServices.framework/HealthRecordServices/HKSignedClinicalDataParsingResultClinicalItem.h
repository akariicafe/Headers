@class NSArray, HKVerifiableClinicalRecord;

@interface HKSignedClinicalDataParsingResultClinicalItem : HKSignedClinicalDataParsingResultItem <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKVerifiableClinicalRecord *verifiableClinicalRecord;
@property (readonly, copy, nonatomic) NSArray *medicalRecords;
@property (readonly, copy, nonatomic) NSArray *clinicalRecords;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)uniquenessChecksum;
- (id)copyWithOriginalRecord:(id)a0 mainRecord:(id)a1;
- (id)initWithOriginalRecord:(id)a0 mainRecord:(id)a1 verifiableClinicalRecord:(id)a2 medicalRecords:(id)a3 clinicalRecords:(id)a4;

@end
