@class CHSpellCheckerErrorModel, AppleSpell;

@interface CHSpellChecker : NSObject {
    AppleSpell *_spellServer;
    CHSpellCheckerErrorModel *_errorModel;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isWordInUserDictionaries:(id)a0 caseSensitive:(BOOL)a1;
- (id)correctionsForString:(id)a0 shouldUseErrorModel:(BOOL)a1 forLocale:(id)a2;
- (id)topCorrectionForRecognition:(id)a0 contextBeforeToken:(id)a1 contextSeparator:(id)a2 shouldUseErrorModel:(BOOL)a3 forLocale:(id)a4 minScore:(double)a5;
- (id)topCorrectionForString:(id)a0 contextBeforeToken:(id)a1 contextSeparator:(id)a2 shouldUseErrorModel:(BOOL)a3 forLanguage:(id)a4;
- (id)topCorrectionsForRecognition:(id)a0 contextBeforeToken:(id)a1 contextSeparator:(id)a2 shouldUseErrorModel:(BOOL)a3 forLocale:(id)a4 minScore:(double)a5;

@end
