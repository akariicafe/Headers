@class NSDate, NSString, NSUUID, HKUserDomainConceptPropertyCollection, HKUserDomainConceptTypeIdentifier, HKUserDomainConceptSemanticIdentifier, HKMedicalCodingCollection, HKUserDomainConceptLinkCollection;

@interface HKUserDomainConcept : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKUserDomainConceptTypeIdentifier *identifier;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, nonatomic) double creationTimestamp;
@property (readonly, nonatomic) double modificationTimestamp;
@property (readonly, nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } operatingSystemVersion;
@property (readonly, copy, nonatomic) NSString *build;
@property (nonatomic) long long healthd_use_only_syncEntityIdentity;
@property (readonly, copy, nonatomic) HKUserDomainConceptSemanticIdentifier *semanticIdentifier;
@property (readonly, copy, nonatomic) HKUserDomainConceptPropertyCollection *propertyCollection;
@property (readonly, nonatomic) BOOL canRequestSyncUponInsertion;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) HKMedicalCodingCollection *codingCollection;
@property (readonly, copy, nonatomic) HKUserDomainConceptLinkCollection *linkCollection;

+ (id)_typeIdentifier;
+ (id)deletedUserDomainConceptWithUUID:(id)a0 creationTimestamp:(double)a1;

- (id)init;
- (unsigned long long)hash;
- (void)_setIdentifier:(id)a0;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (BOOL)unitTesting_isIdentical:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setUUID:(id)a0;
- (id)_initBareObject;
- (id)_dataDescription;
- (id)_firstCodingForSystem:(id)a0;
- (void)_setBuild:(id)a0;
- (void)_setCodingCollection:(id)a0;
- (void)_setCreationTimestamp:(double)a0;
- (void)_setDeleted:(BOOL)a0;
- (void)_setLinkCollection:(id)a0;
- (void)_setModificationTimestamp:(double)a0;
- (void)_setOperatingSystemVersion:(struct { long long x0; long long x1; long long x2; })a0;
- (void)_setPropertyCollection:(id)a0;
- (id)copyUserDomainConceptByMergingInConcept:(id)a0;
- (id)copyUserDomainConceptByMergingInPropertyCollection:(id)a0;
- (id)copyUserDomainConceptBySettingProperties:(id)a0;
- (id)deletedUserDomainConcept;
- (id)firstAdhocCoding;
- (id)firstConceptIdentifier;
- (id)firstOntologyCoding;
- (id)initWithCodingCollection:(id)a0 linkCollection:(id)a1 propertyCollection:(id)a2;
- (BOOL)isAdHocUserDomainConcept;
- (BOOL)isSemanticallyEquivalent:(id)a0;
- (id)modificationCopy;
- (id)unitTesting_duplicate;
- (BOOL)unitTesting_isIdentical:(id)a0 ignoreModificationTimestamp:(BOOL)a1;
- (id)userDomainConceptByAddingCodings:(id)a0;
- (id)userDomainConceptByReplacingCodings:(id)a0;
- (id)userDomainConceptByReplacingLinks:(id)a0;
- (id)userDomainConceptByReplacingLinks:(id)a0 andCodings:(id)a1;

@end
