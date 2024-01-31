@class NSString, NSArray;

@interface HKGenericMedicationSearchResult : NSObject

@property (readonly, copy, nonatomic) NSString *genericMedicationId;
@property (readonly, copy, nonatomic) NSString *genericMedicationName;
@property (readonly, copy, nonatomic) NSString *brandName;
@property (readonly, copy, nonatomic) NSArray *ingredients;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyByReplacingWithIngredients:(id)a0;
- (id)initWithGenericMedicationId:(id)a0 genericMedicationName:(id)a1 brandName:(id)a2 ingredients:(id)a3;

@end
