@interface OADRelativeRect : NSObject <NSCopying> {
    float mLeft;
    float mTop;
    float mRight;
    float mBottom;
}

- (float)left;
- (void)setBottom:(float)a0;
- (id)init;
- (unsigned long long)hash;
- (float)right;
- (void)setTop:(float)a0;
- (float)top;
- (id)description;
- (float)bottom;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLeft:(float)a0;
- (void)setRight:(float)a0;
- (id)initWithLeft:(float)a0 top:(float)a1 right:(float)a2 bottom:(float)a3;

@end
