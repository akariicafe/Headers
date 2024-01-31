@class NSString, UIBezierPath, _UICollectionLayoutListAttributes, NSIndexPath;

@interface UICollectionViewLayoutAttributes : NSObject <NSCopying, UIDynamicItem> {
    NSString *_elementKind;
    NSString *_reuseIdentifier;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    long long _zPosition;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _maskViewFrame;
    id _preferredSizingData;
    _UICollectionLayoutListAttributes *_listAttributes;
    struct { unsigned char isCellKind : 1; unsigned char isDecorationView : 1; unsigned char isHidden : 1; unsigned char isClone : 1; unsigned char masksToBounds : 1; unsigned char maskedCorners : 4; unsigned char hasDefaultLayoutMargins : 1; unsigned char removeMaskViewAfterAnimation : 1; unsigned char pinnedToVisibleBounds : 1; unsigned char hasCustomAttributes : 1; } _layoutFlags;
    BOOL _hasMaskViewFrame;
    unsigned long long _selectionGrouping;
    double _cornerRadius;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _defaultLayoutMargins;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } transform3D;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (nonatomic) double alpha;
@property (nonatomic) long long zIndex;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) unsigned long long representedElementCategory;
@property (readonly, nonatomic) NSString *representedElementKind;
@property (readonly, nonatomic) unsigned long long collisionBoundsType;
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)layoutAttributesForCellWithIndexPath:(id)a0;
+ (id)layoutAttributesForDecorationViewOfKind:(id)a0 withIndexPath:(id)a1;
+ (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 withIndexPath:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setZPosition:(long long)a0;
- (long long)_zPosition;
- (id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)isSizeEqualForPreferredFittingAttributes:(id)a0;

@end
