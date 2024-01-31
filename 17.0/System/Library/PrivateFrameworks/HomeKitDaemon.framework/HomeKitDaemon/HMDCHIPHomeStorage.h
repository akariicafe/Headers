@class NSString, NSDictionary, NSData, NSNumber;

@interface HMDCHIPHomeStorage : HMFObject <HMFLogging, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *fabricID;
@property (copy) NSNumber *lastNodeID;
@property (copy) NSData *rootCertificate;
@property (copy) NSData *operationalCertificate;
@property (copy) NSData *intermediateCertificate;
@property (copy) NSDictionary *keyValueStore;
@property (readonly, copy) NSDictionary *debugDictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateHomeModel:(id)a0;
- (BOOL)updateUsingHomeModel:(id)a0;

@end
