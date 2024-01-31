@class BRLTJaBrailleStateManagerInternal, BRLTJaTranslator, BRLTJaStagedString, BRLTJaEditableString;
@protocol BRLTJaBrailleStateManagerDelegate;

@interface BRLTJaBrailleStateManager : NSObject

@property (readonly) BRLTJaBrailleStateManagerInternal *underlyingObject;
@property (copy, nonatomic) id<BRLTJaBrailleStateManagerDelegate> delegate;
@property (copy, nonatomic) BRLTJaTranslator *translator;
@property (nonatomic) BOOL isShowingAlert;
@property (nonatomic) BOOL isShowingTerminalOutput;
@property (readonly, nonatomic) BRLTJaEditableString *displayedScript;
@property (readonly, nonatomic) BRLTJaStagedString *displayedBraille;

+ (id)manager;

- (void)showPreviousCandidate;
- (BOOL)delete;
- (void).cxx_destruct;
- (BOOL)isEditing;
- (void)setScript:(id)a0;
- (id)initWithUnderlyingObject:(id)a0;
- (void)selectCandidate;
- (void)escapeCommand;
- (BOOL)forwardDelete;
- (void)insertBrailleChar:(id)a0;
- (BOOL)isCandidateSelectionActive;
- (BOOL)isWordDescriptionActive;
- (BOOL)returnCommand;
- (long long)scriptLocationForBrailleLocation:(long long)a0;
- (void)setBrailleSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)showNextCandidate;
- (void)showNextWordDescription;
- (void)showPreviousWordDescription;
- (void)startCandidateSelection;
- (void)wordDescriptionCommand;

@end
