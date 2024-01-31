@class OADColor;

@interface OADBulletColorSpecification : OADBulletColor {
    OADColor *mColor;
}

- (unsigned long long)hash;
- (id)color;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBulletColor:(id)a0;

@end
