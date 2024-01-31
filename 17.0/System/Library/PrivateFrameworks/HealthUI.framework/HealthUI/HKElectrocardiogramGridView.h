@class NSArray, CAShapeLayer, UIBezierPath, NSMutableArray;

@interface HKElectrocardiogramGridView : UIView

@property (retain, nonatomic) NSMutableArray *gridLayers;
@property (retain, nonatomic) NSArray *grids;
@property (retain, nonatomic) CAShapeLayer *controlSignalLayer;
@property (nonatomic) struct CGSize { double width; double height; } unitSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } majorGridSize;
@property (retain, nonatomic) UIBezierPath *controlSignalPath;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_createLayers;
- (id)initWithUnitSize:(struct CGSize { double x0; double x1; })a0 grids:(id)a1;

@end
