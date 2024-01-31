@class NSSet, NSCharacterSet;
@protocol TILinguisticDataSource;

@interface TILanguageModelOfflineLearningTaskMail : TILanguageModelOfflineLearningTask {
    NSCharacterSet *_linePaddingCharacters;
    NSSet *_forwardedMessageSeparators;
    id<TILinguisticDataSource> _dataSource;
}

+ (id)dataSourceForTask;

- (void).cxx_destruct;
- (id)dataSource;
- (id)forwardedMessageSeparators;
- (id)initWithClientIdentifier:(id)a0 oneTimeTask:(BOOL)a1;
- (id)linePaddingCharacters;

@end
