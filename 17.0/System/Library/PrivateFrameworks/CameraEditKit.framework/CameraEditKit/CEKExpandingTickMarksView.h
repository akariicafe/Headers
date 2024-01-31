@class NSMutableArray;

@interface CEKExpandingTickMarksView : UIView

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } _selectedRange;
@property (readonly, nonatomic) NSMutableArray *_tickViews;
@property (nonatomic) BOOL expanded;

- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelectedValue:(double)a0;
- (unsigned long long)_collapsedTickIndexForIndex:(unsigned long long)a0;
- (unsigned long long)_middleTickIndex;
- (void)setSelectedValue:(double)a0 animated:(BOOL)a1;

@end
