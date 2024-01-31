@class NSString, UIBezierPath, UICollectionViewLayoutAttributes, NSCollectionLayoutItem, NSIndexPath;

@interface _UICollectionLayoutVisibleItem : NSObject <_NSCollectionLayoutVisibleItem> {
    BOOL _dirty;
    UICollectionViewLayoutAttributes *_layoutAttributes;
    NSCollectionLayoutItem *_layoutItem;
}

@property (nonatomic) double alpha;
@property (nonatomic) long long zIndex;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) struct CGPoint { double x0; double x1; } center;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } transform3D;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) unsigned long long representedElementCategory;
@property (readonly, nonatomic) NSString *representedElementKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long collisionBoundsType;
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;

- (void).cxx_destruct;

@end
