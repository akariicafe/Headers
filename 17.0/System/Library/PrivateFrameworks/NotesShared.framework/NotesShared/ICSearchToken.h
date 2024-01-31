@class NSString, _CSSuggestionToken, NSArray;

@interface ICSearchToken : NSObject

@property (retain, nonatomic) _CSSuggestionToken *csToken;
@property (retain, nonatomic) NSString *iconImageName;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subQueryString;
@property (readonly, nonatomic) unsigned long long suggestionType;
@property (readonly, nonatomic) NSString *scopeName;
@property (readonly, nonatomic) unsigned long long selectedScopeIndex;
@property (readonly, nonatomic) NSArray *availableScopes;

+ (id)iconImageNameForSuggestionType:(unsigned long long)a0;
+ (id)iconImageNameForCSToken:(id)a0;
+ (unsigned long long)suggestionTypeOfFirstItemInTokens:(id)a0;

- (void).cxx_destruct;
- (BOOL)hasMultipleScopes;
- (id)initWithCSSuggestionToken:(id)a0;
- (id)initWithTitle:(id)a0 subQueryString:(id)a1 suggestionType:(unsigned long long)a2;

@end
