@interface PUPhotosSharingViewControllerSpec : NSObject

@property (readonly, nonatomic) double interItemSpacing;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } selectionBadgeSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } optionBadgeSize;
@property (readonly, nonatomic) struct UIOffset { double x0; double x1; } selectionBadgeOffset;
@property (readonly, nonatomic) unsigned long long selectionBadgeCorner;
@property (readonly, nonatomic) unsigned long long optionBadgeCorner;

- (BOOL)embedsActivityViewForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 horizontalSizeClass:(long long)a1 verticalSizeClass:(long long)a2;
- (double)interItemSpacingForWidth:(double)a0;
- (BOOL)maximizeImageHeightForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
