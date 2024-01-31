@class NSArray, NSString;

@interface AXSSDocumentTextRuleBasic : AXSSDocumentTextRule

@property (copy, nonatomic) NSArray *avoidWords;
@property (copy, nonatomic) NSArray *avoidPhrases;
@property (copy, nonatomic) NSArray *suggestedWords;
@property (nonatomic) BOOL caseSensitive;
@property (copy, nonatomic) NSString *note;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)issuesForWord:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 previousWord:(id)a2 previousWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 inText:(id)a4 ignoreRuleUntilIndex:(long long *)a5;

@end
