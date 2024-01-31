@class NSString;

@interface TPDocumentSettings : TSPObject {
    BOOL _hasBody;
    BOOL _hasHeaders;
    BOOL _hasFooters;
    BOOL _hasFacingPages;
    BOOL _qlPreview;
    BOOL _copyMovies;
    BOOL _copyAssets;
    BOOL _placeholderAuthoring;
    BOOL _sectionAuthoring;
    BOOL _linksEnabled;
    BOOL _hyphenation;
    BOOL _ligatures;
    BOOL _tocLinksEnabled;
    BOOL _showCTMarkup;
    BOOL _showCTDeletions;
    BOOL _changeBarsVisible;
    BOOL _formatChangesVisible;
    BOOL _annotationsVisible;
    BOOL _documentIsRTL;
    long long _footnoteKind;
    long long _footnoteFormat;
    long long _footnoteNumbering;
    long long _footnoteGap;
    NSString *_decimalTab;
    NSString *_language;
    NSString *_hyphenationLanguage;
    NSString *_creationLocale;
    NSString *_originalTemplate;
    NSString *_creationDate;
    NSString *_bibliographyFormat;
}

@property (nonatomic) BOOL hasBody;
@property (nonatomic) BOOL hasHeaders;
@property (nonatomic) BOOL hasFooters;
@property (nonatomic) BOOL hasFacingPages;
@property (nonatomic) BOOL quickLookPreview;
@property (nonatomic) BOOL copyMovies;
@property (nonatomic) BOOL copyTemplateAssets;
@property (nonatomic) BOOL placeholderAuthoring;
@property (nonatomic) BOOL sectionAuthoring;
@property (nonatomic) BOOL hyperlinksEnabled;
@property (nonatomic) BOOL autoHyphenation;
@property (nonatomic) BOOL useLigatures;
@property (nonatomic) BOOL tocLinksEnabled;
@property (nonatomic) BOOL documentIsRTL;
@property (nonatomic) BOOL showCTMarkup;
@property (nonatomic) BOOL showCTDeletions;
@property (nonatomic) int ctBubblesVisibility;
@property (nonatomic) BOOL changeBarsVisible;
@property (nonatomic) BOOL formatChangesVisible;
@property (nonatomic) BOOL annotationsVisible;
@property (nonatomic) long long footnoteKind;
@property (nonatomic) long long footnoteFormat;
@property (nonatomic) long long footnoteNumbering;
@property (nonatomic) long long footnoteGap;
@property (readonly, nonatomic) long long basicFootnoteFormat;
@property (copy, nonatomic) NSString *decimalTab;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *hyphenationLanguage;
@property (copy, nonatomic) NSString *creationLocale;
@property (copy, nonatomic) NSString *originalTemplate;
@property (copy, nonatomic) NSString *creationDate;
@property (copy, nonatomic) NSString *bibliographyFormat;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)resetForNewDocumentFromTemplate:(id)a0 locale:(id)a1;
- (void)setCTBubblesVisibility:(int)a0;
- (id)stringWithCurrentDate;

@end
