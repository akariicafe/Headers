@class NSString, SFSearchResult, SFCardSection, NSAttributedString, SFImage;

@interface SearchUICompletion : NSObject

@property (readonly, nonatomic) NSString *typedString;
@property (readonly, nonatomic) SFSearchResult *result;
@property (readonly, nonatomic) SFCardSection *cardSection;
@property (retain, nonatomic) NSAttributedString *completionString;
@property (retain, nonatomic) NSString *extensionString;
@property (retain, nonatomic) SFImage *image;
@property (retain, nonatomic) NSString *bridgeString;
@property (readonly, nonatomic) NSString *copyableString;
@property (readonly, nonatomic) BOOL completionResultIsPotentiallyPunchout;

+ (id)localizedNameForBundleIdentifier:(id)a0;
+ (id)initWithTypedString:(id)a0 result:(id)a1 cardSection:(id)a2;
+ (id)localizedOpenString;
+ (id)localizedSearchString;
+ (id)localizedShowMoreString;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })nonPartialRangeOfTypedString:(id)a0 inString:(id)a1;
+ (BOOL)stringMatchesWritingDirection:(id)a0;
+ (BOOL)supportsResult:(id)a0 cardSection:(id)a1;

- (void)updateFields;
- (id)description;
- (void).cxx_destruct;
- (id)completionStringToMatch;
- (id)completionStringWithString:(id)a0;
- (id)initWithTypedString:(id)a0 result:(id)a1 cardSection:(id)a2;
- (id)nonPrefixMatchExtensionString;
- (id)prefixMatchExtensionString;

@end
