@interface ODIBending : NSObject {
    float mSpaceWidth;
    float mSpaceHeight;
    BOOL mWithArrows;
    float mRectHeight;
    unsigned int mMaxNodeCount;
    unsigned int mMaxColumnCount;
}

+ (BOOL)mapIdentifier:(id)a0 state:(id)a1;
+ (unsigned int)mapLogicalBoundsWithShapeSize:(struct CGSize { double x0; double x1; })a0 spaceSize:(struct CGSize { double x0; double x1; })a1 maxNodeCount:(unsigned int)a2 maxColumnCount:(unsigned int)a3 state:(id)a4;

- (void)setRectHeight:(float)a0;
- (id)initWithArrows:(BOOL)a0;
- (void)mapWithState:(id)a0;
- (void)setMaxColumnCount:(unsigned int)a0;
- (void)setMaxNodeCount:(unsigned int)a0;

@end
