@class UIColor, EKDayOccurrenceView;

@interface EKDayOccurrenceResizeHandleView : UIView

@property (retain, nonatomic) UIColor *baseColor;
@property (readonly, weak, nonatomic) EKDayOccurrenceView *occurrenceView;
@property (nonatomic) double radius;

- (void)willMoveToSuperview:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_circleRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 occurrenceView:(id)a1;

@end
