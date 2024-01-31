@interface AXSSDocumentTextRule : NSObject <NSCopying>

@property (nonatomic) long long granularity;
@property (nonatomic) long long severity;

+ (id)matchReplacementArrayCapitalization:(id)a0 withSource:(id)a1;
+ (id)matchReplacementCapitalization:(id)a0 withSource:(id)a1;
+ (id)replaceCustomRegexNotation:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)issuesForWord:(id)a0 atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 previousWord:(id)a2 previousWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 inText:(id)a4 ignoreRuleUntilIndex:(long long *)a5;
- (id)issuesInText:(id)a0;

@end
