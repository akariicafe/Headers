@interface TSWPUserDefaults : NSObject

+ (void)initialize;
+ (BOOL)underlineLinks;
+ (void)setUnderlineLinks:(BOOL)a0;
+ (unsigned long long)minimumFontSize;
+ (id)invisiblesColor;
+ (unsigned long long)maximumFontSize;
+ (BOOL)automaticallyDetectLinks;
+ (BOOL)automaticallyDetectLists;
+ (BOOL)p_UserDefaultSet:(id)a0 force:(BOOL)a1;
+ (void)registerUserDefaults:(BOOL)a0;
+ (void)setAutomaticallyDetectLinks:(BOOL)a0;
+ (void)setAutomaticallyDetectLists:(BOOL)a0;
+ (void)setInvisiblesColor:(id)a0;
+ (void)setSpellCheckingEnabled:(BOOL)a0;
+ (void)setSuperscriptNumericalSuffixes:(BOOL)a0;
+ (BOOL)spellCheckingEnabled;
+ (BOOL)superscriptNumericalSuffixes;
+ (BOOL)allowsFontSmoothing;
+ (id)appReplacementsDictionary;
+ (BOOL)automaticDashSubstitution;
+ (BOOL)automaticQuoteSubstitution;
+ (BOOL)automaticTextReplacement;
+ (BOOL)automaticallyDetectPhoneLinks;
+ (BOOL)automaticallyFormatFractions;
+ (BOOL)p_cachedBoolForKey:(id)a0;
+ (id)p_caseInsensitiveDictionary:(id)a0 mergedWithDictionary:(id)a1;
+ (void)p_defaultsChanged:(id)a0;
+ (id)quotesArrayForLanguage:(id)a0;
+ (id)replacementsDictionaryAllowingFractions:(BOOL)a0;
+ (void)setAutomaticDashSubstitution:(BOOL)a0;
+ (void)setAutomaticQuoteSubstitution:(BOOL)a0;
+ (void)setAutomaticTextReplacement:(BOOL)a0;
+ (void)setAutomaticallyDetectPhoneLinks:(BOOL)a0;
+ (void)setAutomaticallyFormatFractions:(BOOL)a0;
+ (void)setReplacementsDictionary:(id)a0;
+ (void)setShowsQuickFormatBar:(BOOL)a0;
+ (BOOL)shouldShowInvisibles;
+ (BOOL)showsQuickFormatBar;
+ (BOOL)spellCheckingAllowed;

@end
