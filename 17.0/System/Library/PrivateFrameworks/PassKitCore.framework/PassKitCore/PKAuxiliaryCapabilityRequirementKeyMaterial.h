@class NSArray;

@interface PKAuxiliaryCapabilityRequirementKeyMaterial : NSObject

@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSArray *rootAttestation;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithKeyMaterialContents:(id)a0;
- (BOOL)isEqualToAuxiliaryCapabilityRequirementKey:(id)a0;

@end
