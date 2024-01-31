@class NSSet;

@interface HKDrugInteractionSeverity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long severityLevel;
@property (readonly, copy, nonatomic) NSSet *validRegionCodes;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSeverityLevel:(unsigned long long)a0 validRegionCodes:(id)a1;

@end
