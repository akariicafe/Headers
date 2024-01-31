@class TIErrorGenerator, NSString, TIKeyboardTyper, TIInputMode, TITestTyperDriver, NSMutableArray, TIKeyboardInputManagerConfig;

@interface AutocorrectionTestHarness : NSObject <TIKeyboardInputManagerFactory, TITestHarness> {
    TIErrorGenerator *_errorGenerator;
    NSMutableArray *_insertedText;
}

@property (readonly, nonatomic) TIKeyboardInputManagerConfig *config;
@property (readonly, nonatomic) BOOL multilingualEnabled;
@property (readonly, nonatomic) TIInputMode *secondaryInputMode;
@property (readonly, nonatomic) TIKeyboardTyper *testTyper;
@property (readonly, nonatomic) NSMutableArray *resultClassifiers;
@property (readonly, nonatomic) TITestTyperDriver *dslTestDriver;
@property BOOL saveDebugData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)overrideInputMode:(id)a0;

- (void)reset;
- (id)initWithAttributes:(id)a0;
- (void)tearDown;
- (void).cxx_destruct;
- (id)selfId;
- (BOOL)compareExpectedValue:(id)a0 withResult:(id)a1;
- (id)emptyResultForPlayback:(id)a0;
- (id)emptyResultForTest:(id)a0;
- (id)friendId;
- (void)initializeConversationHistory;
- (id)keyboardFromWidth:(id)a0 orientation:(id)a1 keyboardLayout:(id)a2;
- (id)newKeyboardInputManager;
- (void)nullifyConversationHistory;
- (BOOL)outcomeIsFailureForTest:(id)a0 withResult:(id)a1;
- (id)replayTest:(id)a0 withError:(id)a1;
- (BOOL)requiresMaintenance;
- (id)runConversationTest:(id)a0 trialID:(unsigned long long)a1 withError:(id)a2;
- (id)runTest:(id)a0 trialID:(unsigned long long)a1 withError:(id)a2;
- (unsigned int)seedForTest:(id)a0 trialID:(unsigned long long)a1;
- (void)setResultClassifiers;
- (void)testConversation:(id)a0 testingSender:(id)a1 warmupMessages:(unsigned long long)a2 adaptToSentMessages:(BOOL)a3 adaptToReceivedMessages:(BOOL)a4 trialID:(unsigned long long)a5 withError:(id)a6 writingResults:(id)a7;
- (id)testTerminator;
- (void)trainWithCorpus:(id)a0;
- (id)typeTest:(id)a0 withError:(id)a1;

@end
