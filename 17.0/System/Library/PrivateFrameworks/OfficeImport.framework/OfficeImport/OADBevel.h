@interface OADBevel : NSObject <NSCopying> {
    int mType;
    float mWidth;
    float mHeight;
}

- (void)setType:(int)a0;
- (void)setWidth:(float)a0;
- (id)init;
- (unsigned long long)hash;
- (float)height;
- (void)setHeight:(float)a0;
- (id)description;
- (float)width;
- (BOOL)isEqual:(id)a0;
- (int)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
