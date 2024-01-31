@interface ABTachogramClassifier : NSObject {
    struct unique_ptr<Tellurium::tellurium_classifier_t, std::default_delete<Tellurium::tellurium_classifier_t>> { struct __compressed_pair<Tellurium::tellurium_classifier_t *, std::default_delete<Tellurium::tellurium_classifier_t>> { struct tellurium_classifier_t *__value_; } __ptr_; } _classifier;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)classifyTachogram:(id)a0;
- (void)logToFileForTacho:(const void *)a0 withClassification:(id)a1;

@end
