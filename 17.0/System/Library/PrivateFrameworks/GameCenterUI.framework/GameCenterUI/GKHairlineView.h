@interface GKHairlineView : UIView

@property (nonatomic) long long alignment;

+ (id)hairlineViewForAlignment:(long long)a0;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)sizeToFit;

@end
