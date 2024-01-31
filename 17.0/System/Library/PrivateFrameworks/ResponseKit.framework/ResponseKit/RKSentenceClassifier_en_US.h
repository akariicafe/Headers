@interface RKSentenceClassifier_en_US : RKSentenceClassifier

+ (id)preProcessTextMessageForLinguisticTagger:(id)a0;

- (void)analyzeSentence;
- (id)addSentenceTerminatorQuestion:(id)a0;
- (id)alternativeConjunctions;
- (id)classifySentence;

@end
