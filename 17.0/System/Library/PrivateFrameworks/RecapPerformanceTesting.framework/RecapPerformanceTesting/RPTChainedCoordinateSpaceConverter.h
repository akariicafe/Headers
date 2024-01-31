@class RPTCoordinateSpaceConverter;

@interface RPTChainedCoordinateSpaceConverter : RPTCoordinateSpaceConverter

@property (retain, nonatomic) RPTCoordinateSpaceConverter *primary;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *secondary;

- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGVector { double x0; double x1; })convertVector:(struct CGVector { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })convertSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithPrimary:(id)a0 secondary:(id)a1;

@end
