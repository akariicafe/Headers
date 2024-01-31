@class NSArray, HKMedicalRecord, HKClinicalRecord;

@interface HDExtractionResultItemUnit : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKMedicalRecord *medicalRecord;
@property (readonly, copy, nonatomic) HKClinicalRecord *clinicalRecord;
@property (readonly, copy, nonatomic) NSArray *downloadableAttachments;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMedicalRecord:(id)a0 clinicalRecord:(id)a1 downloadableAttachments:(id)a2;

@end
