@class NSMutableDictionary, NSMutableString;

@interface CMStyle : NSObject <NSCopying> {
    NSMutableDictionary *properties;
    NSMutableString *mStyleString;
}

- (id)init;
- (unsigned long long)hash;
- (id)initWithStyle:(id)a0;
- (id)properties;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)propertyForName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeForName:(id)a0;
- (void)appendPropertyForName:(id)a0 intValue:(int)a1;
- (void)addPropertiesToCSSStyleString:(id)a0;
- (void)addProperty:(id)a0 forKey:(id)a1;
- (void)appendDefaultBorderStyle;
- (void)appendOriginInfoFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)appendPositionInfoFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)appendPropertyForName:(id)a0 color:(id)a1;
- (void)appendPropertyForName:(id)a0 floatValue:(float)a1;
- (void)appendPropertyForName:(id)a0 length:(double)a1 unit:(int)a2;
- (void)appendPropertyForName:(id)a0 oadTextSpacing:(id)a1;
- (void)appendPropertyForName:(id)a0 oadTextSpacing:(id)a1 lineHeight:(float)a2 unit:(int)a3;
- (void)appendPropertyForName:(id)a0 oadTextSpacing:(id)a1 unit:(int)a2;
- (void)appendPropertyForName:(id)a0 stringValue:(id)a1;
- (void)appendPropertyForName:(id)a0 stringWithColons:(id)a1;
- (void)appendPropertyString:(id)a0;
- (void)appendSizeInfoFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)cacheFriendlyCSSStyleString;
- (id)cssStyleString;

@end
