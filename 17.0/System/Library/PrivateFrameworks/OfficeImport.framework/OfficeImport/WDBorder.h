@class OITSUColor;

@interface WDBorder : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    BOOL mShadow;
    BOOL mFrame;
}

- (void)setWidth:(unsigned char)a0;
- (id)init;
- (unsigned long long)hash;
- (id)color;
- (void)setFrame:(BOOL)a0;
- (BOOL)shadow;
- (id)description;
- (void)setStyle:(int)a0;
- (unsigned char)width;
- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (void)setBorder:(id)a0;
- (int)style;
- (BOOL)isEqual:(id)a0;
- (BOOL)frame;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned char)space;
- (void)setShadow:(BOOL)a0;
- (void)setSpace:(unsigned char)a0;
- (BOOL)isEqualToBorder:(id)a0;
- (void)setNullBorder;
- (void)setSingleBlackBorder;

@end
