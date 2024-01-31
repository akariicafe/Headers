@class CNFuture;

@interface CNAutocompleteInputStringTokenizer : NSObject

@property (retain) CNFuture *nameStringTokenizer;

+ (id)lazyNameStringTokenizerWithLocale:(id)a0;
+ (id)tokensFromString:(id)a0;

- (id)init;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id /* block */)expandCJKNames;
- (id)tokensFromString:(id)a0;

@end
