@class NSString, UITextChecker;

@interface AXSSDocumentTextRuleCapitals : AXSSDocumentTextRule

@property (retain, nonatomic) UITextChecker *textChecker;
@property (copy, nonatomic) NSString *textCheckerLanguage;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)checkSpelledCorrectly:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })checkSpellingOfString:(id)a0 includeAutocorrect:(BOOL)a1;
- (id)issuesForWord:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 previousWord:(id)a2 previousWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 inText:(id)a4 ignoreRuleUntilIndex:(long long *)a5;

@end
