@class NSIndexPath;

@interface _UIDragDestinationIndicatorView : UIView

@property (nonatomic) BOOL isSourceList;
@property (readonly, nonatomic) double scaleFactor;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithSourceListStyle:(BOOL)a0;
- (void)positionHorizontallyCenteredInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)positionOnCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 above:(BOOL)a1;
- (void)positionVerticallyCenteredInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
