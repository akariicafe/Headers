@class NSArray;

@interface HULinkedApplicationRatingView : UIView

@property (retain, nonatomic) NSArray *starViews;
@property (nonatomic) double rating;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)updateStarViews;

@end
