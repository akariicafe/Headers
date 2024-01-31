@class PFParallaxColor;

@interface PFParallaxPaletteSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PFParallaxColor *primaryColor;
@property (readonly, nonatomic) PFParallaxColor *secondaryColor;

+ (id)dictionaryWithPaletteSuggestion:(id)a0;
+ (id)paletteSuggestionWithDictionary:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToSuggestion:(id)a0;
- (id)initWithPrimaryColor:(id)a0 secondaryColor:(id)a1;

@end
