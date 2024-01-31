@interface HKUserDomainConceptProperty : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) double timestamp;

+ (id)mergeListsOfPropertiesWithType:(long long)a0 intoListOfProperties:(id)a1 fromListOfProperties:(id)a2 options:(unsigned long long)a3;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueDescription;
- (id)initWithType:(long long)a0 version:(long long)a1 timestamp:(double)a2 deleted:(BOOL)a3;
- (void)unitTesting_setTimestamp:(double)a0;

@end
