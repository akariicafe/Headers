@class OADBlipRef;

@interface OADImageBulletProperties : OADBulletProperties {
    OADBlipRef *mImage;
}

- (unsigned long long)hash;
- (id)image;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBlipRef:(id)a0;

@end
