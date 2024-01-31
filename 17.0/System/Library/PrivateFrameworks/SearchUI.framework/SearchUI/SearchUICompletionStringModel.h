@class NSString;

@interface SearchUICompletionStringModel : NSObject

@property (readonly, nonatomic) NSString *displayedText;
@property (readonly, nonatomic) BOOL searchFieldHasTokens;
@property (readonly, nonatomic) BOOL hasMarkedText;
@property (readonly, nonatomic) unsigned long long queryId;

- (void).cxx_destruct;
- (id)initWithTypedString:(id)a0 hasTokens:(BOOL)a1 queryId:(unsigned long long)a2 hasMarkedText:(BOOL)a3;

@end
