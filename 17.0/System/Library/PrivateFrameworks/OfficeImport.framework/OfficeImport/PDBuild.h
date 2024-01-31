@class OADDrawable;

@interface PDBuild : NSObject {
    BOOL mIsAnimateBackground;
    OADDrawable *mDrawable;
}

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)drawable;
- (void)setDrawable:(id)a0;
- (BOOL)isAnimateBackground;
- (void)setIsAnimateBackground:(BOOL)a0;

@end
