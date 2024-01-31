@class NSString, NSArray;

@interface _UISearchSuggestionItemGroup : NSObject

@property (readonly, copy, nonatomic) NSString *headerTitle;
@property (readonly, copy, nonatomic) NSArray *suggestionItems;

- (void).cxx_destruct;
- (id)initWithHeaderTitle:(id)a0 suggestionItems:(id)a1;

@end
