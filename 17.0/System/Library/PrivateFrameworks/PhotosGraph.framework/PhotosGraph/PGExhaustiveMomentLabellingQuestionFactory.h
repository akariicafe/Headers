@interface PGExhaustiveMomentLabellingQuestionFactory : PGSurveyQuestionFactory

- (unsigned short)questionType;
- (long long)questionOptions;
- (id)_inferMeaningLabelsForMomentNode:(id)a0 graph:(id)a1 cache:(id)a2 meaningLabels:(id)a3 sceneTaxonomy:(id)a4;
- (id)_meaningLabelsForWhichToGenerateQuestions;
- (id)_questionsToAddWithMomentNodes:(id)a0 graph:(id)a1 localFactoryScore:(double)a2 limit:(unsigned long long)a3 sceneTaxonomy:(id)a4 alreadyGeneratedQuestions:(id)a5 progressBlock:(id /* block */)a6;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;

@end
