@class NSString, UIFont, UIFontDescriptor;

@interface TMLFont : NSObject <TMLFontJSExports, NSCopying> {
    UIFont *_font;
    UIFontDescriptor *_fontDescriptor;
}

@property (readonly, nonatomic) struct CGFont { } *CGFontRef;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) double ascender;
@property (readonly, nonatomic) double descender;
@property (readonly, nonatomic) double capHeight;
@property (readonly, nonatomic) double xHeight;
@property (readonly, nonatomic) double lineHeight;
@property (readonly, nonatomic) double leading;

+ (void)initializeJSContext:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFontDescriptor:(id)a0;
- (id)bold;
- (id)initWithFont:(id)a0;
- (id)italic;
- (id)withAttributes:(id)a0;
- (id)UIFontValue;
- (id)withAXRestrictedStyle:(id)a0;
- (id)withFamily:(id)a0;
- (id)withScale:(double)a0;
- (id)withScaleTransform:(double)a0;
- (id)withSize:(double)a0;
- (id)withStyle:(id)a0;
- (id)withSymbolicTraits:(unsigned int)a0;
- (id)withWeight:(double)a0;
- (id)withWidth:(double)a0;

@end
