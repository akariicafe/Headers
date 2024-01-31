@class OADDrawable;

@interface PDAnimationShapeTarget : PDAnimationTarget {
    OADDrawable *mDrawable;
}

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)drawable;
- (void)setDrawable:(id)a0;

@end
