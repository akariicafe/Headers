@class HKConceptSelection;

@interface HKRelationshipConceptSelection : HKConceptSelection

@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) HKConceptSelection *selection;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDirection:(unsigned long long)a0 type:(long long)a1 selection:(id)a2;

@end
