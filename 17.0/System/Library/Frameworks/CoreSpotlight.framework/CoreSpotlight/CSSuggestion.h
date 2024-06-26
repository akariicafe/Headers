@class _CSSuggestionToken, NSString, NSDictionary, NSData, NSArray, NSAttributedString, CSInstantAnswers;

@interface CSSuggestion : NSObject <NSSecureCoding, NSCopying> {
    NSString *_searchString;
    NSString *_displayString;
    NSString *_userQueryString;
    NSArray *_previousSuggestionTokens;
    NSArray *_updatedSuggestionTokens;
    NSAttributedString *_localizedAttributedString;
    NSArray *_suggestionTokens;
    _CSSuggestionToken *_currentSuggestionToken;
    long long _rank;
    long long _resultCount;
    BOOL _enableFragments;
    BOOL _updated;
    CSInstantAnswers *_instantAnswer;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *features;
@property (readonly, nonatomic) NSDictionary *rankCategories;
@property (nonatomic) long long rank;
@property (nonatomic) long long version;
@property (readonly, nonatomic) NSAttributedString *localizedAttributedSuggestion;
@property (readonly, nonatomic) long long suggestionKind;

+ (id)advancedSuggestionWithUserString:(id)a0 currentSuggestion:(id)a1 parseResult:(id)a2;
+ (id)emptySuggestion;
+ (id)attachmentNameSuggestionWithUserString:(id)a0 currentSuggestion:(id)a1;
+ (id)instantAnswerWithUserString:(id)a0 currentSuggestion:(id)a1 itemResult:(id)a2;
+ (id)messageWithAttachmentsSuggestionWithUserString:(id)a0 currentSuggestion:(id)a1;
+ (id)noreplyTemplates;
+ (id)senderContainsSuggestionWithUserString:(id)a0 currentSuggestion:(id)a1;
+ (id)subjectSuggestionWithUserString:(id)a0 currentSuggestion:(id)a1;
+ (id)suggestionWithCurrentSuggestion:(id)a0 userQueryString:(id)a1 completion:(id)a2 attributes:(id)a3 scores:(id)a4 options:(id)a5;
+ (id)suggestionWithCurrentSuggestion:(id)a0 userQueryString:(id)a1 parseResult:(id)a2;
+ (id)suggestionWithUserString:(id)a0;
+ (id)suggestionWithUserString:(id)a0 currentSuggestion:(id)a1;
+ (id)suggestionWithUserString:(id)a0 currentSuggestion:(id)a1 updatedSuggestionTokens:(id)a2;
+ (id)suggestionsWithCurrentSuggestion:(id)a0 userQueryString:(id)a1 completionData:(id)a2 options:(id)a3;
+ (id)suggestionsWithCurrentSuggestion:(id)a0 userQueryString:(id)a1 suggestionData:(id)a2 options:(id)a3;
+ (id)updatedSuggestionWithCurrentSuggestion:(id)a0 highlightedText:(id)a1;
+ (id)updatedSuggestionWithCurrentSuggestion:(id)a0 highlightedText:(id)a1 highlightedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (id)updatedSuggestionWithCurrentSuggestion:(id)a0 interaction:(int)a1;
+ (id)updatedSuggestionWithCurrentSuggestion:(id)a0 mailboxKind:(long long)a1;
+ (id)updatedSuggestionWithCurrentSuggestion:(id)a0 token:(id)a1 scopeSelection:(unsigned long long)a2;
+ (id)updatedSuggestionWithCurrentSuggestion:(id)a0 token:(id)a1 tokenText:(id)a2;
+ (id)updatedSuggestionWithCurrentSuggestion:(id)a0 userString:(id)a1 tokens:(id)a2;

- (id)displayString;
- (id)searchString;
- (unsigned long long)hash;
- (id)queryString;
- (long long)resultCount;
- (id)score;
- (void)update;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setResultCount:(long long)a0;
- (id)uniqueIdentifier;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void)updateSearchString:(id)a0;
- (id)currentToken;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)enableFragments;
- (id)displayTextForPeopleSuggestion:(id)a0;
- (void)updatePreviousSuggestionTokens:(id)a0;
- (id)userQueryString;
- (id)addSuggestionHighlight:(id)a0 withDisplayText:(id)a1;
- (void)commonInitWithUserString:(id)a0 currentSuggestion:(id)a1 currentSuggestionToken:(id)a2 updatedSuggestionTokens:(id)a3;
- (void)commonInitWithUserString:(id)a0 currentSuggestionToken:(id)a1 previousSuggestionTokens:(id)a2 updatedSuggestionTokens:(id)a3 enableFragments:(BOOL)a4;
- (long long)compareByRank:(id)a0;
- (id)currentSuggestionToken;
- (id)currentTokens;
- (BOOL)hasAttachmentsRelatedSearchString;
- (BOOL)hasSuggestionTokenWithType:(long long)a0;
- (id)initWithUserString:(id)a0 currentSuggestion:(id)a1;
- (id)initWithUserString:(id)a0 currentSuggestion:(id)a1 currentSuggestionToken:(id)a2;
- (id)initWithUserString:(id)a0 currentSuggestion:(id)a1 currentToken:(id)a2 tokens:(id)a3;
- (id)initWithUserString:(id)a0 currentSuggestion:(id)a1 displayString:(id)a2 attributeValues:(id)a3 attributeStrings:(id)a4 options:(id)a5;
- (id)initWithUserString:(id)a0 currentSuggestion:(id)a1 displayString:(id)a2 score:(id)a3;
- (id)initWithUserString:(id)a0 currentSuggestion:(id)a1 internalType:(long long)a2;
- (id)initWithUserString:(id)a0 currentSuggestion:(id)a1 itemResult:(id)a2;
- (id)initWithUserString:(id)a0 currentSuggestion:(id)a1 suggestionResult:(id)a2;
- (id)initWithUserString:(id)a0 currentSuggestion:(id)a1 suggestionTokenResult:(id)a2;
- (id)initWithUserString:(id)a0 currentSuggestion:(id)a1 updatedSuggestionTokens:(id)a2;
- (id)initWithUserString:(id)a0 previousSuggestionTokens:(id)a1 displayString:(id)a2 attributeValues:(id)a3 attributeStrings:(id)a4 enableFragements:(BOOL)a5 options:(id)a6;
- (id)instantAnswer;
- (BOOL)isEqualToSuggestion:(id)a0;
- (void)mergeSuggestionAndUpdateLocalizedAttributedString:(id)a0;
- (long long)numberOfMessageWithAttachmentTokens;
- (id)personSuggestionByReplacingCurrentTokenEmailAddresses:(id)a0;
- (id)previousSuggestionTokens;
- (id)searchStringByRemovingPrefixForScopeKey:(id)a0;
- (void)setEnableFragments:(BOOL)a0;
- (void)setInstantAnswer:(id)a0;
- (id)suggestionDataSources;
- (id)suggestionTokens;
- (void)updateCurrentSuggestionToken:(id)a0;
- (void)updateDisplayString:(id)a0;
- (void)updateLocalizedAttributedString:(id)a0;
- (void)updateLocalizedAttributedStringForPersonSuggestion;
- (void)updateResultCount:(long long)a0;
- (void)updateSuggestFragments:(BOOL)a0;
- (void)updateSuggestionTokens:(id)a0;
- (void)updateUpdatedFlag:(BOOL)a0;
- (void)updateUpdatedSuggestionTokens:(id)a0;
- (void)updateUserQueryString:(id)a0;
- (void)updateVersion:(long long)a0;

@end
