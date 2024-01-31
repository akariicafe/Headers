@class WBSOpenSearchURLTemplate, NSString, NSDictionary, NSArray, NSSet, WBSURLSuffixChecker;

@interface WBSSearchProvider : NSObject <NSCopying, NSSecureCoding, WBSSearchProvider> {
    WBSURLSuffixChecker *_suffixChecker;
    NSString *_queryKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long parsecSearchEndpointType;
@property (readonly, nonatomic) int parsecSearchResultType;
@property (readonly, nonatomic) long long searchID;
@property (readonly, copy, nonatomic) NSString *searchEngineIdentifier;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplate;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *safeSearchURLTemplate;
@property (readonly, copy, nonatomic) NSDictionary *safeSearchURLQueryParameters;
@property (readonly, nonatomic) WBSOpenSearchURLTemplate *suggestionsURLTemplate;
@property (readonly, copy, nonatomic) NSArray *hostSuffixes;
@property (readonly, copy, nonatomic) NSArray *pathPrefixes;
@property (readonly, copy, nonatomic) NSString *carrierInfo;
@property (readonly, copy, nonatomic) NSSet *homepageURLs;
@property (readonly, copy, nonatomic) NSArray *languages;
@property (readonly, copy, nonatomic) NSArray *userRegions;
@property (readonly, copy, nonatomic) NSDictionary *topLevelDomains;
@property (readonly, copy, nonatomic) NSString *scriptName;
@property (readonly, nonatomic) BOOL usesSearchTermsFromFragment;
@property (readonly, nonatomic) BOOL usesSecureSearchURL;
@property (readonly, copy, nonatomic) NSString *groupIdentifierQueryStringKey;
@property (readonly, copy, nonatomic) NSString *parsecSearchIdentifier;
@property (readonly, copy, nonatomic) NSString *parsecSearchSuggestionIdentifier;
@property (readonly, nonatomic) BOOL searchShouldUseSafeSearchTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultProviderInUserVisibleProviders:(id)a0 usingSettings:(id)a1 forPrivateBrowsing:(BOOL)a2;
+ (id)sortedSearchProvidersInArray:(id)a0 usingShortNameOrder:(id)a1;
+ (id)userVisibleProvidersInAllProviders:(id)a0 usingContext:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)urlIsValidSearch:(id)a0;
- (id)initWithDictionary:(id)a0 usingContext:(id)a1;
- (id)safeSearchURLForSearchURL:(id)a0;
- (id)urlByIncorporatingGroupIdentifier:(unsigned long long)a0 ifIsValidSearchResultsURL:(id)a1;
- (id)userVisibleQueryFromSearchURL:(id)a0;
- (unsigned long long)_parsecSearchEndpointTypeInDictionary:(id)a0;
- (int)_parsecSearchResultTypeInDictionary:(id)a0;
- (id)_searchURLTemplateStringInDictionary:(id)a0 usingContext:(id)a1;
- (id)_substitutionValuesForTemplateURLUsingContext:(id)a0;
- (id)_suggestionsURLTemplateStringInDictionary:(id)a0 usingContext:(id)a1;
- (id)_urlByEnsuringQueryItemInURL:(id)a0 percentEncodedQueryItemKey:(id)a1 percentEncodedQueryItemValue:(id)a2;
- (id)searchURLForUserTypedString:(id)a0;
- (BOOL)shouldDisplaySearchProviderInContext:(id)a0;
- (id)suggestionsURLForUserTypedString:(id)a0;
- (id)urlAttributingToSafariIfValidSearchURL:(id)a0;
- (BOOL)urlIsHomepage:(id)a0;
- (BOOL)urlIsHomepage:(id)a0 shouldUseCanonicalRepresentation:(BOOL)a1;
- (id)userVisibleQueryFromSearchURL:(id)a0 allowQueryThatLooksLikeURL:(BOOL)a1;

@end
