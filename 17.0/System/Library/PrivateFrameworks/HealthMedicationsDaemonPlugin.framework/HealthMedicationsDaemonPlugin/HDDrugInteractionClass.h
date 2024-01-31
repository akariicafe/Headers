@class NSArray;

@interface HDDrugInteractionClass : HKDrugInteractionClass

@property (readonly, copy, nonatomic) NSArray *relationships;

- (id)init;
- (unsigned long long)hash;
- (Class)classForCoder;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 relationships:(id)a1 ancestorIdentifier:(id)a2 ontologyIdentifier:(id)a3 validRegionCodes:(id)a4;

@end
