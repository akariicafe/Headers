@class NSString;

@interface _PSCandidate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *domainId;
@property (readonly, copy, nonatomic) NSString *derivedIntentId;
@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSString *recipientsId;

+ (id)selfCandidate;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDomainId:(id)a0 derivedIntentId:(id)a1 bundleId:(id)a2 recipientsId:(id)a3;
- (id)candidateIdentifier;
- (BOOL)hasCandidateIdentifier;

@end
