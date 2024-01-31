@interface OADSystemColor : OADColor {
    int mSystemColorID;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSystemColorID:(int)a0;
- (int)systemColorID;

@end
