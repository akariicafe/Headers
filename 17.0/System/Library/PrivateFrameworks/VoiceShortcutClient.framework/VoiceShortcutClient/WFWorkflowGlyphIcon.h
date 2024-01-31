@class WFIconBackground;

@interface WFWorkflowGlyphIcon : WFIcon

@property (readonly, nonatomic) unsigned short glyph;
@property (readonly, nonatomic) WFIconBackground *background;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasClearBackground;
- (BOOL)hasTransparentBackground;
- (id)initWithGlyph:(unsigned short)a0 background:(id)a1;

@end
