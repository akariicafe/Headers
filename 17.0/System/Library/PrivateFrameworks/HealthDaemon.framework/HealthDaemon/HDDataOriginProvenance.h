@class NSString, NSNumber, HDContributorReference;

@interface HDDataOriginProvenance : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long syncProvenance;
@property (nonatomic) long long syncIdentity;
@property (copy, nonatomic) NSString *productType;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } operatingSystemVersion;
@property (copy, nonatomic) NSString *sourceVersion;
@property (copy, nonatomic) NSString *timeZoneName;
@property (retain, nonatomic) NSNumber *sourceID;
@property (retain, nonatomic) NSNumber *deviceID;
@property (retain, nonatomic) HDContributorReference *contributorReference;

+ (id)dataProvenanceWithSyncProvenance:(long long)a0 syncIdentity:(long long)a1 productType:(id)a2 systemBuild:(id)a3 operatingSystemVersion:(struct { long long x0; long long x1; long long x2; })a4 sourceVersion:(id)a5 timeZoneName:(id)a6 sourceID:(id)a7 deviceID:(id)a8 contributorReference:(id)a9;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contributorID;

@end
