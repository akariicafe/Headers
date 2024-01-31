@class NSArray, NSLayoutConstraint;

@interface HKMaximumSizeView : UIView

@property (retain, nonatomic) NSLayoutConstraint *maximumWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *maximumHeightConstraint;
@property (retain, nonatomic) NSArray *hardHorizontalConstraints;
@property (retain, nonatomic) NSArray *hardVerticalConstraints;
@property (retain, nonatomic) NSArray *softHorizontalConstraints;
@property (retain, nonatomic) NSArray *softVerticalConstraints;
@property (nonatomic) struct CGSize { double width; double height; } maximumSize;

- (void).cxx_destruct;
- (void)_buildConstraintsForView:(id)a0;
- (void)_setConstraints:(id)a0 active:(BOOL)a1;
- (id)initWithView:(id)a0 maximumSize:(struct CGSize { double x0; double x1; })a1;

@end
