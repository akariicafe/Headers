@class NSString, NSArray, CACSpeechRecognizer, NSDictionary;

@interface CACCommandRecognizer : NSObject {
    unsigned int _flags;
    NSDictionary *_contextEvaluators;
    NSArray *_builtInLMIdentifiers;
}

@property (retain) NSString *type;
@property (retain) id owner;
@property (readonly) CACSpeechRecognizer *speechRecognizer;
@property (readonly) NSArray *spokenCommands;

+ (void)_accumulateCloseMatchUsingCommandIdentifier:(id)a0 substitutionTable:(id)a1;
+ (void)_showHintWithAccumulateCloseMatches;
+ (void)resetCloseMatchAccumulator;
+ (void)suspendCloseMatchAccumulatorForCommand;

- (BOOL)isListening;
- (void)startListening;
- (void).cxx_destruct;
- (void)stopListening;
- (void)_buildLanguageModelUsingCommands;
- (id)_commandParametersFromCACLanguageModel:(id)a0;
- (void)_synchronizeSpeechRecognizerSettings;
- (id)commandParametersFromCACLanguageModel:(id)a0;
- (id)commandStrings;
- (id)commandTextSequenceFromCACLanguageModel:(id)a0;
- (void)handleSpokenCommand:(id)a0;
- (id)initWithCommands:(id)a0 contextEvaluators:(id)a1 builtInLMIdentifiers:(id)a2;
- (BOOL)isAppropriateForContext;
- (id)objectForContextEvaluatorKey:(id)a0;
- (void)speechRecognizer:(id)a0 didBeginUtteranceWithID:(unsigned long long)a1;
- (void)speechRecognizer:(id)a0 didRecognizeRXResult:(struct __RXLanguageObject { } *)a1;
- (void)synchronizeWithReason:(id)a0;

@end
