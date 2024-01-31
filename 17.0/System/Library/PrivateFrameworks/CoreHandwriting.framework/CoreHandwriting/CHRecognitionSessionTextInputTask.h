@class NSArray, CHTextInputQuery;
@protocol CHRecognitionSessionTextInputTaskDelegate;

@interface CHRecognitionSessionTextInputTask : CHRecognitionSessionTask

@property (nonatomic) id<CHRecognitionSessionTextInputTaskDelegate> delegate;
@property (readonly, nonatomic) NSArray *initialTextInputTargets;
@property (retain, nonatomic) CHTextInputQuery *activeTextInputQuery;

- (void).cxx_destruct;
- (id)clutterFilter;
- (id)initWithLocales:(id)a0 preferredLocales:(id)a1 strokeProvider:(id)a2 inputResult:(id)a3 recognitionQOSClass:(unsigned int)a4;
- (id)initWithLocales:(id)a0 strokeProvider:(id)a1 initialTextInputTargets:(id)a2 inputResult:(id)a3 recognitionEnvironment:(long long)a4;
- (id)newGroupingManager;
- (id)newStrokeClassifier;
- (id)recognitionResultsForGroupingResult:(id)a0 groupingManager:(id)a1;
- (id)textCorrectionResultsForGroupingResult:(id)a0 groupingManager:(id)a1;

@end
