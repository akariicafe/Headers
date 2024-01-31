@interface TILanguageModelOfflineLearningHandleLanguageLikelihood : TILanguageModelOfflineLearningHandle

- (void)load;
- (void)adaptToParagraph:(id)a0 timeStamp:(double)a1 adaptationType:(int)a2;
- (void)didFinishLearning;
- (void)updateAdaptationContext:(id)a0;

@end
