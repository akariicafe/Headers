@class NSString, NSArray, UISearchToken, CKSearchTokenFilter;

@interface CKSearchTokenQueryResult : CKSpotlightQueryResult

@property (nonatomic) unsigned long long contentType;
@property (nonatomic) unsigned long long filterOptions;
@property (retain, nonatomic) UISearchToken *searchToken;
@property (copy, nonatomic) NSString *itemIdentifier;
@property (retain, nonatomic) NSArray *tokenAddresses;
@property (weak, nonatomic) CKSearchTokenFilter *associatedStagedFilter;

- (id)image;
- (void).cxx_destruct;
- (id)tokenText;
- (id)initWithContentType:(unsigned long long)a0 conversation:(id)a1 itemIdentifier:(id)a2 tokenAddresses:(id)a3;
- (void)addFilterOption:(unsigned long long)a0;
- (id)attributedSuggestionTextForSearchText:(id)a0 font:(id)a1;
- (BOOL)hasFilterOption:(unsigned long long)a0;

@end
