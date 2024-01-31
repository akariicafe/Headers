@class BRLTScriptString, NSString, NSPointerArray, NSAttributedString, BRLTBrailleStateManager;

@interface SCROBrailleFormatter : NSObject <BRLTBrailleTranslationDelegateProtocol, BRLTBrailleStateManagerDelegate, NSCopying>

@property (retain, nonatomic) BRLTScriptString *emptyEditingScriptString;
@property (nonatomic) int lineFocus;
@property (readonly, nonatomic) int outputContractionMode;
@property (readonly, nonatomic) int inputContractionMode;
@property (readonly, nonatomic) BOOL outputShowEightDot;
@property (readonly, nonatomic) BOOL inputShowEightDot;
@property (readonly, nonatomic) BOOL showDotsSevenAndEight;
@property (nonatomic) int displayMode;
@property (nonatomic) BOOL currentUnread;
@property (nonatomic) BOOL anyUnread;
@property (retain, nonatomic) id appToken;
@property (nonatomic) long long lineOffset;
@property (retain, nonatomic) NSAttributedString *statusText;
@property (readonly, nonatomic) BRLTBrailleStateManager *stateManager;
@property (readonly, nonatomic) long long firstToken;
@property (readonly, nonatomic) long long lastToken;
@property (readonly, nonatomic) unsigned long long generationID;
@property (readonly, nonatomic) NSPointerArray *outputDelegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)resetEditingManager;

- (void).cxx_destruct;
- (void)translate:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)deepCopyWithZone:(struct _NSZone { } *)a0;
- (void)translate;
- (void)brailleDisplayDeletedCharacter:(id)a0;
- (void)brailleDisplayInsertedCharacter:(id)a0 modifiers:(id)a1;
- (void)brailleDisplayStringDidChange:(id)a0 brailleSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 modifiers:(id)a2;
- (void)didInsertScriptString:(id)a0;
- (id)printBrailleForText:(id)a0 language:(id)a1 mode:(unsigned long long)a2 textPositionsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 locations:(id *)a4 textFormattingRanges:(id)a5;
- (void)replaceScriptStringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withScriptString:(id)a1 cursorLocation:(unsigned long long)a2;
- (void)requestSpeech:(id)a0 language:(id)a1;
- (void)scriptSelectionDidChange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)textForPrintBraille:(id)a0 language:(id)a1 mode:(unsigned long long)a2 locations:(id *)a3;
- (void)addOutputDelegate:(id)a0;
- (void)addText:(id)a0 language:(id)a1 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 token:(long long)a3 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a4 isEditableText:(BOOL)a5 isAlert:(BOOL)a6 isTerminalOutput:(BOOL)a7;
- (void)addText:(id)a0 overrideText:(id)a1 language:(id)a2 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 token:(long long)a4 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a5 technical:(BOOL)a6 isEditableText:(BOOL)a7 isAlert:(BOOL)a8 isTerminalOutput:(BOOL)a9;
- (void)addText:(id)a0 overrideText:(id)a1 language:(id)a2 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 token:(long long)a4 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a5 technical:(BOOL)a6 isEditableText:(BOOL)a7 isAlert:(BOOL)a8 isTerminalOutput:(BOOL)a9 paddingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a10 suggestionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a11 editingString:(id)a12 textFormattingRanges:(id)a13;
- (void)addText:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 token:(long long)a2 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 isEditableText:(BOOL)a4 isAlert:(BOOL)a5 isTerminalOutput:(BOOL)a6;
- (void)addText:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 token:(long long)a2 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 technical:(BOOL)a4 isEditableText:(BOOL)a5 isAlert:(BOOL)a6 isTerminalOutput:(BOOL)a7;
- (void)addTextJa:(id)a0 overrideText:(id)a1 language:(id)a2 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 token:(long long)a4 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a5 technical:(BOOL)a6 isEditableText:(BOOL)a7 isAlert:(BOOL)a8 isTerminalOutput:(BOOL)a9 paddingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a10 suggestionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a11 editingString:(id)a12 textFormattingRanges:(id)a13;
- (void)addTextNonJa:(id)a0 overrideText:(id)a1 language:(id)a2 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 token:(long long)a4 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a5 technical:(BOOL)a6 isEditableText:(BOOL)a7 isTerminalOutput:(BOOL)a8 paddingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a9 suggestionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a10 editingString:(id)a11 textFormattingRanges:(id)a12;
- (void)clearPlaceholderForEditing;
- (BOOL)hasPlaceholderText;
- (id)initWithOutputContractionMode:(int)a0 inputContractionMode:(int)a1 outputShowEightDot:(BOOL)a2 inputShowEightDot:(BOOL)a3 showDotsSevenAndEight:(BOOL)a4;
- (void)jaAppendTextTo:(id)a0 text:(id)a1 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 token:(long long)a3 focus:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a4 isEditableText:(BOOL)a5 isAlert:(BOOL)a6 isTerminalOutput:(BOOL)a7 paddingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a8 suggestionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a9;
- (void)jaFlushText:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfBrailleCellRepresentingCharacterAtIndex:(unsigned long long)a0;

@end
