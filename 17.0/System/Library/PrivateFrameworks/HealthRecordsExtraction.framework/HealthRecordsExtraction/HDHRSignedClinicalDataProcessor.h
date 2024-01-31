@class NSArray, HKSignedClinicalDataParsingResult, NSError, HDHRSSignedClinicalDataProcessingContextCollection;

@interface HDHRSignedClinicalDataProcessor : NSObject

- (id)init;
- (void)processOriginalSignedClinicalDataRecords:(NSArray *)a0 options:(unsigned long long)a1 completion:(void (^)(HKSignedClinicalDataParsingResult *, NSError *))a2;
- (id)preprocessDataInSource:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)preprocessFHIRResourceObject:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)processContextCollection:(HDHRSSignedClinicalDataProcessingContextCollection *)a0 completion:(void (^)(HKSignedClinicalDataParsingResult *, NSError *))a1;
- (id)reprocessOriginalRecords:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
