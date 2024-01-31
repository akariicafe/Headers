@class NLDataProvider;

@interface NLModelTrainingDataSet : NLDataSet {
    NLDataProvider *_modelTrainingDataProvider;
    NLDataProvider *_modelValidationDataProvider;
}

- (void).cxx_destruct;
- (id)dataProviderOfType:(long long)a0;
- (id)initWithConfiguration:(id)a0 numberOfTrainingInstances:(unsigned long long)a1 numberOfValidationInstances:(unsigned long long)a2 trainingDataSource:(void *)a3 validationDataSource:(void *)a4 instanceDataProvider:(id /* block */)a5;

@end
