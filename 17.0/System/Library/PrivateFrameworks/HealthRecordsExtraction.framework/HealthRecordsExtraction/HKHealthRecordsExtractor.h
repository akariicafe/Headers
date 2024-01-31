@class HDOriginalFHIRResourceObject, NSError, HDExtractionResultItem;

@interface HKHealthRecordsExtractor : NSObject {
    void /* unknown type, empty encoding */ router;
    void /* unknown type, empty encoding */ decoder;
}

- (id)init;
- (void).cxx_destruct;
- (id)comparePatientResourceDataWithExisting:(id)a0 incoming:(id)a1 error:(id *)a2;
- (void)extractResource:(HDOriginalFHIRResourceObject *)a0 completion:(void (^)(HDExtractionResultItem *, NSError *))a1;

@end
