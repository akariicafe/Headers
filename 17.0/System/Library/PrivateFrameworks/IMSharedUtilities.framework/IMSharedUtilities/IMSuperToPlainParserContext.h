@class NSString, NSMutableString;

@interface IMSuperToPlainParserContext : IMFromSuperParserContext {
    BOOL _extractLinks;
}

@property (readonly, nonatomic) NSString *plainString;
@property (readonly, nonatomic) NSMutableString *mutablePlainString;

- (void)dealloc;
- (id)initWithAttributedString:(id)a0;
- (id)name;
- (id)initWithAttributedString:(id)a0 extractLinks:(BOOL)a1;
- (void)parser:(id)a0 foundAttributes:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 characters:(id)a3;
- (id)resultsForLogging;

@end
