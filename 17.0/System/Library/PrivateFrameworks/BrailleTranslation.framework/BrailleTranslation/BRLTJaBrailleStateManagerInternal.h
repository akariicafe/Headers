@class BRLTJaEditableStringInternal, BRLTJaStagedStringInternal;

@interface BRLTJaBrailleStateManagerInternal : NSObject {
    void /* unknown type, empty encoding */ script;
    void /* unknown type, empty encoding */ braille;
    void /* unknown type, empty encoding */ brailleForScriptTranslationResult;
    void /* unknown type, empty encoding */ candidateManager;
    void /* unknown type, empty encoding */ brailleCache;
    void /* unknown type, empty encoding */ stageScriptForStageResult;
    void /* unknown type, empty encoding */ alertScript;
    void /* unknown type, empty encoding */ alertBraille;
    void /* unknown type, empty encoding */ wordDescriptionManager;
}

@property (class, nonatomic, readonly) BRLTJaBrailleStateManagerInternal *manager;

@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ translator;
@property (nonatomic, readonly) BOOL isEditing;
@property (nonatomic, readonly) BOOL isCandidateSelectionActive;
@property (nonatomic) void /* unknown type, empty encoding */ isShowingAlert;
@property (nonatomic, readonly) BRLTJaEditableStringInternal *displayedScript;
@property (nonatomic, readonly) BRLTJaStagedStringInternal *displayedBraille;
@property (nonatomic) void /* unknown type, empty encoding */ isWordDescriptionActive;
@property (nonatomic) void /* unknown type, empty encoding */ isShowingTerminalOutput;

- (void)showPreviousCandidate;
- (BOOL)delete;
- (id)init;
- (void).cxx_destruct;
- (void)setScript:(id)a0;
- (void)selectCandidate;
- (void)escapeCommand;
- (BOOL)forwardDelete;
- (void)insertBrailleChar:(id)a0;
- (BOOL)returnCommand;
- (long long)scriptLocationForBrailleLocation:(long long)a0;
- (void)setBrailleSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)showNextCandidate;
- (void)showNextWordDescription;
- (void)showPreviousWordDescription;
- (void)startCandidateSelection;
- (void)wordDescriptionCommand;

@end
