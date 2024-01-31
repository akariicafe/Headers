@interface HDHRSignedClinicalDataHandler : NSObject

- (void)processOriginalSignedClinicalDataRecords:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)preprocessDataInSource:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)preprocessFHIRResourceObject:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)processContextCollection:(id)a0 completion:(id /* block */)a1;
- (id)reprocessOriginalRecords:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
