@interface TSWPUserDefaults : NSObject

+ (id)invisiblesColor;
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

@end
