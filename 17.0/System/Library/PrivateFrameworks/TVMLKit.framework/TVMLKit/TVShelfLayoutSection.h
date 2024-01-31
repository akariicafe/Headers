@interface TVShelfLayoutSection : NSObject {
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_itemFrames;
}

@property (nonatomic) long long numberOfItems;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } itemsBoundingFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sectionHeaderFrame;
@property (nonatomic) double sectionHeaderHorizontalOffset;
@property (nonatomic) double sectionHeaderVerticalBump;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;

- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstItemFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })itemFrameAtIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lastItemFrame;
- (void)setItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(long long)a1;

@end
