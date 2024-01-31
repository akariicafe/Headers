@class NSString, NSArray, NSAttributedString;
@protocol JULanguageAwareStringPreprocessor;

@interface JULanguageAwareString : NSObject <JUWritingDirectionContentProtocol> {
    void /* unknown type, empty encoding */ baseAttributedString;
    void /* unknown type, empty encoding */ $__lazy_storage_$_attributedString;
    void /* unknown type, empty encoding */ cachedTextStorage;
    void /* unknown type, empty encoding */ knownBaseWritingDirections;
    void /* unknown type, empty encoding */ string;
    void /* unknown type, empty encoding */ $__lazy_storage_$_localizedLowercase;
    void /* unknown type, empty encoding */ $__lazy_storage_$_localizedUppercase;
    void /* unknown type, empty encoding */ $__lazy_storage_$_newlinesCollapsedToSpace;
    void /* unknown type, empty encoding */ $__lazy_storage_$_trimmed;
    void /* unknown type, empty encoding */ numbers;
    void /* unknown type, empty encoding */ paragraphs;
    void /* unknown type, empty encoding */ words;
    void /* unknown type, empty encoding */ $__lazy_storage_$_juFullRange;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isEmpty;
    void /* unknown type, empty encoding */ $__lazy_storage_$_utf16Count;
    void /* unknown type, empty encoding */ $__lazy_storage_$_utf32Count;
    void /* unknown type, empty encoding */ $__lazy_storage_$_characterCount;
    void /* unknown type, empty encoding */ $__lazy_storage_$_thresholdBaseWritingDirection;
}

@property (class, nonatomic) BOOL alwaysGenerateAttributedString;
@property (class, nonatomic) BOOL keepStatisticsOnLanguageComponents;
@property (class, nonatomic, retain) id<JULanguageAwareStringPreprocessor> delegate;
@property (class, nonatomic, readonly) JULanguageAwareString *JULanguageAwareStringEmpty;

@property (nonatomic, retain) NSAttributedString *attributedString;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, retain) JULanguageAwareString *localizedLowercase;
@property (nonatomic, retain) JULanguageAwareString *localizedUppercase;
@property (nonatomic, retain) JULanguageAwareString *newlinesCollapsedToSpace;
@property (nonatomic, retain) JULanguageAwareString *trimmed;
@property (nonatomic, readonly) NSArray *numbers;
@property (nonatomic, readonly) NSArray *paragraphs;
@property (nonatomic, readonly) NSArray *words;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } juFullRange;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) long long length;
@property (nonatomic) long long utf32Length;
@property (nonatomic) long long numberOfCharacters;
@property (nonatomic) long long thresholdBaseWritingDirection;

- (id)init;
- (void).cxx_destruct;
- (long long)baseWritingDirectionForCharacterAtLocation:(long long)a0;
- (id)initWithAttributedString:(id)a0 baseParagraphStyle:(id)a1 keepStatisticsOnLanguageComponents:(BOOL)a2;
- (id)initWithLanguageAwareString:(id)a0 attributes:(id)a1 keepStatisticsOnLanguageComponents:(BOOL)a2;
- (id)initWithString:(id)a0 attributes:(id)a1 baseParagraphStyle:(id)a2 keepStatisticsOnLanguageComponents:(BOOL)a3;
- (id)initWithString:(id)a0 baseParagraphStyle:(id)a1 generateAttributedString:(BOOL)a2 keepStatisticsOnLanguageComponents:(BOOL)a3;
- (long long)writingDirectionOfLine:(long long)a0 maximumLinesShown:(long long)a1 withWidth:(double)a2 lineBreakMode:(long long)a3 cacheLayoutInfo:(BOOL)a4;
- (id)writingDirectionsQuantities;

@end
