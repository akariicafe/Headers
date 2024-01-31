@class NSString;

@interface RTAddressSubPremise : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long subPremiseType;
@property (readonly, copy, nonatomic) NSString *subPremise;

+ (id)stringForSubPremiseType:(long long)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubPremise:(id)a0 subPremiseType:(long long)a1;
- (BOOL)isEqualToAddressSubPremise:(id)a0;

@end
