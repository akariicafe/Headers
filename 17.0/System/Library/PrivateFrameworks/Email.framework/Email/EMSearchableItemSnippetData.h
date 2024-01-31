@class NSString, NSDictionary;

@interface EMSearchableItemSnippetData : NSObject

@property (copy, nonatomic) NSString *searchableItemIdentifier;
@property (copy, nonatomic) NSDictionary *snippetHints;

- (void).cxx_destruct;
- (id)initWithSearchableItemIdentifier:(id)a0 snippetHints:(id)a1;

@end
