@class NSArray, CSSuggestion, NSString, UIImage, _UISearchSuggestionItem_dci;

@interface ICSearchSuggestion : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSArray *orderedDefaultSearchSuggestions;

@property (retain, nonatomic) CSSuggestion *csSuggestion;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *suggestionItemTitle;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) NSString *subQueryString;
@property (readonly, nonatomic) NSString *iconImageName;
@property (readonly, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) _UISearchSuggestionItem_dci *dciSuggestion;

+ (id)iconImageForToken:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSuggestion:(id)a0;

@end
