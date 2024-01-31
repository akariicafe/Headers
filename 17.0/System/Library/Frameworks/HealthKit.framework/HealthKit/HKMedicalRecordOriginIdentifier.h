@class NSUUID, HKFHIRIdentifier;

@interface HKMedicalRecordOriginIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKFHIRIdentifier *fhirIdentifier;
@property (readonly, copy, nonatomic) NSUUID *signedClinicalDataRecordIdentifier;

+ (id)originIdentifierWithFHIRResourceType:(id)a0 identifier:(id)a1;
+ (id)unitTesting_identifierWithAllPropertiesAllocated;
+ (id)unitTesting_identifierWithNeitherPropertyAllocated;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithFHIRIdentifier:(id)a0 signedClinicalDataRecordIdentifier:(id)a1;
- (void)_setFhirIdentifier:(id)a0;
- (void)_setSignedClinicalDataRecordIdentifier:(id)a0;
- (id)initWithFHIRIdentifier:(id)a0;
- (id)initWithSignedClinicalDataRecordIdentifier:(id)a0;

@end
