@interface NSCTGlyphInfo : NSGlyphInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)retain;
- (BOOL)allowsWeakReference;
- (unsigned long long)_cfTypeID;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (unsigned long long)retainCount;
- (id)glyphName;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;
- (id)_baseString;
- (unsigned int)_glyph;
- (unsigned long long)characterCollection;
- (unsigned long long)characterIdentifier;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;

@end
