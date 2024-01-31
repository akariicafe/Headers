@class NSString, HKClinicalType, HKFHIRResource;

@interface HKClinicalRecord : HKSample <NSSecureCoding, NSCopying> {
    NSString *_displayName;
    HKFHIRResource *_FHIRResource;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HKClinicalType *clinicalType;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) HKFHIRResource *FHIRResource;

+ (BOOL)_isConcreteObjectClass;
+ (BOOL)supportsEquivalence;
+ (id)_newClinicalRecordWithType:(id)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4 displayName:(id)a5 FHIRResource:(id)a6 config:(id /* block */)a7;
+ (id)clinicalRecordWithType:(id)a0 startDate:(id)a1 endDate:(id)a2 device:(id)a3 metadata:(id)a4 displayName:(id)a5 FHIRResource:(id)a6;

- (id)init;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEquivalent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setDisplayName:(id)a0;
- (void)_setFHIRResource:(id)a0;
- (id)attachmentObjectIdentifier;
- (id)attachmentSchemaIdentifier;

@end
