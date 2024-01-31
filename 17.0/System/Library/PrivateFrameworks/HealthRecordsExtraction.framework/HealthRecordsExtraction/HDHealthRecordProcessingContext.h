@class NSMutableDictionary, HDHealthRecordRuleset, NSArray, NSMutableArray;

@interface HDHealthRecordProcessingContext : NSObject

@property (retain, nonatomic) NSMutableArray *mutableResources;
@property (retain, nonatomic) NSMutableDictionary *parentResourcesByResource;
@property (retain, nonatomic) NSMutableDictionary *clinicalItemsByType;
@property (retain, nonatomic) NSMutableDictionary *medicalRecordsByOriginalResource;
@property (retain, nonatomic) NSMutableDictionary *clinicalRecordsByMedicalRecord;
@property (readonly, nonatomic) HDHealthRecordRuleset *extractionRuleset;
@property (readonly, copy, nonatomic) NSArray *resources;

- (void).cxx_destruct;
- (id)createExtractionResultWithError:(id *)a0;
- (BOOL)didProcessClinicalRecord:(id)a0 forMedicalRecord:(id)a1 error:(id *)a2;
- (BOOL)didProcessMedicalRecord:(id)a0 forResource:(id)a1 error:(id *)a2;
- (id)extractedClinicalItemsForClinicalType:(long long)a0;
- (BOOL)foundResource:(id)a0 parentResource:(id)a1 error:(id *)a2;
- (id)initWithRuleset:(id)a0 resources:(id)a1;
- (void)setExtractedClinicalItems:(id)a0 forClinicalType:(long long)a1;

@end
