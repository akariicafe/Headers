@protocol TILinguisticDataSource;

@interface TILanguageModelOfflineLearningTaskMessages : TILanguageModelOfflineLearningTask {
    id<TILinguisticDataSource> _dataSource;
}

+ (id)dataSourceForTask;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithClientIdentifier:(id)a0 oneTimeTask:(BOOL)a1;

@end
