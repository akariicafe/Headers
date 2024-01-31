@class OADColor;

@interface OADFontReference : NSObject <NSCopying> {
    int mIndex;
    OADColor *mColor;
}

- (void)setIndex:(int)a0;
- (unsigned long long)hash;
- (id)color;
- (int)index;
- (id)description;
- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToParagraphProperties:(id)a0;

@end
