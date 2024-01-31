@interface CMVO2MaxClassification : NSObject {
    struct unique_ptr<CLVO2MaxClassifier, std::default_delete<CLVO2MaxClassifier>> { struct __compressed_pair<CLVO2MaxClassifier *, std::default_delete<CLVO2MaxClassifier>> { struct CLVO2MaxClassifier *__value_; } __ptr_; } fVO2MaxClassifier;
}

+ (int)CLHKBiologicalSexFromBiologicalSex:(long long)a0;
+ (long long)biologicalSexFromCLHKBiologicalSex:(int)a0;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)classificationDataFromStruct:(struct CLVO2MaxClassificationData { int x0; int x1; int x2; int x3; double x4; double x5; })a0;
- (void)queryAllClassificationsWithHandler:(id /* block */)a0;
- (void)queryClassificationForBiologicalSex:(long long)a0 age:(long long)a1 handler:(id /* block */)a2;
- (void)queryClassificationForBiologicalSex:(long long)a0 age:(long long)a1 vo2Max:(double)a2 handler:(id /* block */)a3;

@end
