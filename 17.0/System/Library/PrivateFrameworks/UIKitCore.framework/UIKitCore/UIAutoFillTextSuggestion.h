@class NSDictionary;

@interface UIAutoFillTextSuggestion : UITextSuggestion

@property (readonly, copy, nonatomic) NSDictionary *contents;

+ (id)autoFillSuggestionWithContents:(id)a0;

- (void).cxx_destruct;
- (id)initWithContents:(id)a0;
- (id)_keyboardCandidate;

@end
