@interface CDMVocSpanMatchService : CDMBaseSpanMatchService

+ (Class)spanMatcherClass;

- (id)setupSpanMatcher:(id)a0;
- (BOOL)shouldBeUsedForAsrAlternatives;

@end
