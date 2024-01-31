@class NSCountedSet, NSLocale;

@interface _LTTextLanguageDetectionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSLocale *dominantLocale;
@property (retain, nonatomic) NSCountedSet *localeDetectionCount;
@property (retain, nonatomic) NSCountedSet *unsupportedLanguageCounts;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
