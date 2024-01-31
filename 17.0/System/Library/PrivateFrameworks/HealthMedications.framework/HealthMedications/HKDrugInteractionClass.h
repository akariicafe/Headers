@class NSString, HKConceptIdentifier, NSSet;

@interface HKDrugInteractionClass : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long relationshipCount;
@property (readonly, copy, nonatomic) HKConceptIdentifier *ancestorIdentifier;
@property (readonly, copy, nonatomic) HKConceptIdentifier *identifier;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSSet *validRegionCodes;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 relationshipCount:(unsigned long long)a1 ancestorIdentifier:(id)a2 ontologyIdentifier:(id)a3 validRegionCodes:(id)a4;

@end
