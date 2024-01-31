@class NSArray, _LTDisambiguableResult, _LTLocalePair, NSAttributedString;

@interface _LTCombinedTranslationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _LTDisambiguableResult *disambiguableResult;
@property (readonly, nonatomic) _LTLocalePair *localePair;
@property (readonly, copy, nonatomic) NSArray *paragraphResults;
@property (readonly, nonatomic) long long route;
@property (readonly, copy, nonatomic) NSAttributedString *translatedText;
@property (readonly, nonatomic) BOOL isFinal;

+ (id)_translatedTextWithAttributesForResult:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithParagraphResults:(id)a0 localePair:(id)a1;

@end
