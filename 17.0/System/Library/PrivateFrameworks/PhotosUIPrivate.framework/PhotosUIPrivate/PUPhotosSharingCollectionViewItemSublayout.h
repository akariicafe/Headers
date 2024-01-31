@class NSIndexPath, UICollectionViewLayoutAttributes;

@interface PUPhotosSharingCollectionViewItemSublayout : NSObject {
    struct CGPoint { double x; double y; } _selectionBadgeCenter;
    struct CGPoint { double x; double y; } _optionBadgeCenter;
}

@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } itemFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleItemFrame;
@property (nonatomic) struct CGSize { double x0; double x1; } selectionBadgeSize;
@property (nonatomic) struct CGSize { double x0; double x1; } optionBadgeSize;
@property (nonatomic) double bottomBadgeInset;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } badgesOffset;
@property (nonatomic) unsigned long long badgesCorner;
@property (readonly, nonatomic) UICollectionViewLayoutAttributes *selectionBadgeLayoutAttributes;
@property (readonly, nonatomic) UICollectionViewLayoutAttributes *optionBadgeLayoutAttributes;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } badgesContainerFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } floatingBadgesContainerFrame;

- (void).cxx_destruct;
- (void)setFloatingOffset:(struct UIOffset { double x0; double x1; })a0;
- (id)initWithIndexPath:(id)a0 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)prepareSublayout;

@end
