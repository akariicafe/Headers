@class INVocabularyUpdater, _INVocabularyValidator, NSObject;
@protocol OS_dispatch_queue;

@interface _INVocabulary : NSObject {
    INVocabularyUpdater *_vocabularyUpdater;
    _INVocabularyValidator *_validator;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)enumerateVocabularyUsingBlock:(id /* block */)a0;
+ (id)sharedVocabulary;
+ (id)supportedVocabularyStringTypes;

- (id)init;
- (id)_validator;
- (void).cxx_destruct;
- (void)_THROW_EXCEPTION_FOR_ATTEMPT_TO_PROVIDE_VOCABULARY_OF_TYPE_THAT_APP_DOES_NOT_HANDLE_:(id)a0;
- (void)_THROW_EXCEPTION_FOR_INVALID_VOCABULARY_TYPE_;
- (void)_setVocabulary:(id)a0 ofType:(long long)a1 onBehalfOf:(id)a2;
- (void)removeAllVocabularyStrings;
- (void)removeAllVocabularyStringsOnBehalfOf:(id)a0;
- (void)setValidatedVocabulary:(id)a0 ofType:(long long)a1;
- (void)setValidatedVocabulary:(id)a0 ofType:(long long)a1 onBehalfOf:(id)a2;
- (void)setVocabulary:(id)a0 ofType:(long long)a1;
- (void)setVocabulary:(id)a0 ofType:(long long)a1 onBehalfOf:(id)a2;
- (void)setVocabularyStrings:(id)a0 ofType:(long long)a1;
- (void)validateVocabularyType:(long long)a0;

@end
