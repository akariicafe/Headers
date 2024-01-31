@interface HKSleepSomnogramBar : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } barRect;
@property (readonly, nonatomic) double top;
@property (readonly, nonatomic) double bottom;
@property (readonly, nonatomic) double left;
@property (readonly, nonatomic) double right;
@property (readonly, nonatomic) double horizontalMidpoint;

- (id)initWithBarRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
