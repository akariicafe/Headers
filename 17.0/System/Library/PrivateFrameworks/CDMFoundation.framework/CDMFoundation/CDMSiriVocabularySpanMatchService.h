@interface CDMSiriVocabularySpanMatchService : CDMBaseSpanMatchService

+ (Class)spanMatcherClass;

- (void)updateData:(id)a0;
- (id)handle:(id)a0;
- (id)handleRequestCommandTypeNames;
- (BOOL)isSetupRerunNeededForRequest:(id)a0;
- (id)setupSpanMatcher:(id)a0;
- (BOOL)shouldBeUsedForAsrAlternatives;

@end
