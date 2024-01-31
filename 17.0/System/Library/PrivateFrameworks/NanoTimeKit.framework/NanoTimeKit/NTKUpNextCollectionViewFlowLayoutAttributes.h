@interface NTKUpNextCollectionViewFlowLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) double darkeningAlphaUniform;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unitFrameOnScreen;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } computedFrame;
@property (nonatomic) double scale;
@property (nonatomic) long long layoutMode;
@property (nonatomic) BOOL notVisibleToUser;
@property (nonatomic) BOOL fullyVisibleToUser;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
