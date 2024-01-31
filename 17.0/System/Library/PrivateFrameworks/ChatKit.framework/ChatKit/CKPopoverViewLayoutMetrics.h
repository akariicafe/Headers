@protocol UICoordinateSpace;

@interface CKPopoverViewLayoutMetrics : NSObject

@property (nonatomic) unsigned long long state;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) id<UICoordinateSpace> coordinateSpace;

- (void).cxx_destruct;
- (id)initWithState:(unsigned long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 coordinateSpace:(id)a2;

@end
