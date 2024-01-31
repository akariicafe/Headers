@class MUISearchSuggestionCategory, NSArray, NSString, CSSuggestion;

@interface MUIContactSuggestion : MUISearchAtomSuggestion {
    MUISearchSuggestionCategory *_category;
    NSString *_title;
    NSArray *_contactEmailAddresses;
    NSString *_contactIdentifier;
    CSSuggestion *_spotlightSuggestion;
}

@property (readonly, copy, nonatomic) NSArray *attributeValues;
@property (readonly, nonatomic) NSArray *contactEmailAddresses;
@property (readonly, nonatomic) NSString *contactIdentifier;

+ (id)suggestionWithTitle:(id)a0 contactEmailAddresses:(id)a1 contactIdentifier:(id)a2 spotlightSuggestion:(id)a3;

- (id)category;
- (id)subtitle;
- (void).cxx_destruct;
- (id)title;
- (id)spotlightSuggestion;
- (id)initWithTitle:(id)a0 contactEmailAddresses:(id)a1 contactIdentifier:(id)a2 spotlightSuggestion:(id)a3;

@end
