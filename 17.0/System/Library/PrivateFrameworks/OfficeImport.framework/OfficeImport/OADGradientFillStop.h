@class OADColor;

@interface OADGradientFillStop : NSObject <NSCopying> {
    OADColor *mColor;
    float mPosition;
}

+ (void)addStopWithColor:(id)a0 position:(float)a1 toArray:(id)a2;

- (unsigned long long)hash;
- (id)color;
- (float)position;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithColor:(id)a0 position:(float)a1;
- (void)setStyleColor:(id)a0;
- (BOOL)usesPlaceholderColor;

@end
