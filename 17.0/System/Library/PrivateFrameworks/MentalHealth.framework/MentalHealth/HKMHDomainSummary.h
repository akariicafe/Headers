@class NSArray;

@interface HKMHDomainSummary : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *domains;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) long long totalSampleCount;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDomains:(id)a0 count:(long long)a1 totalSampleCount:(long long)a2;

@end
