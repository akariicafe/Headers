@interface SeymourUI.UpNextQueuePopOverBackgroundView : UIPopoverBackgroundView

@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) double arrowOffset;

+ (double)arrowHeight;
+ (double)arrowBase;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
