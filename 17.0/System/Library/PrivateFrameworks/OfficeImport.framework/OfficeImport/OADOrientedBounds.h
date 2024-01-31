@interface OADOrientedBounds : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBounds;
    float mRotation;
    unsigned char mFlipX : 1;
    unsigned char mFlipY : 1;
    int mModeX;
    int mModeY;
}

+ (BOOL)directionCloserToVerticalThanToHorizontal:(float)a0;
+ (id)orientedBoundsWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)orientedBoundsWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rotation:(float)a1 flipX:(BOOL)a2 flipY:(BOOL)a3;

- (id)init;
- (unsigned long long)hash;
- (BOOL)flipX;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBox;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setFlipY:(BOOL)a0;
- (float)rotation;
- (void)setFlipX:(BOOL)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)flipY;
- (void)setRotation:(float)a0;
- (BOOL)isEqual:(id)a0;
- (struct CGSize { double x0; double x1; })boundingBoxSize;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rotation:(float)a1 flipX:(BOOL)a2 flipY:(BOOL)a3;
- (BOOL)isEqualToOrientedBounds:(id)a0;
- (void)setOrientedBounds:(id)a0;
- (void)setXMode:(int)a0;
- (void)setYMode:(int)a0;
- (int)xMode;
- (int)yMode;

@end
