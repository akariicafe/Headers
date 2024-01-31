@class NSArray, HKMedicalRecord;

@interface HKClinicalDocumentIndexingRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKMedicalRecord *medicalRecord;
@property (readonly, copy, nonatomic) NSArray *attachmentIdentifiers;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMedicalRecord:(id)a0 attachmentIdentifiers:(id)a1;

@end
